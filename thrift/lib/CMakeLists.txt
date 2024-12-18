# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

include(FindFolly)

include(FindPackageHandleStandardArgs)
find_package(Boost MODULE REQUIRED)


set(LIB_HOME ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(thrift)
add_subdirectory(cpp)
add_subdirectory(cpp2)
if(thriftpy)
  add_subdirectory(py)
endif()

if(thriftpy3)
  #  add_subdirectory(python)
  #  add_subdirectory(py3)

  set(_cybld "${CMAKE_CURRENT_BINARY_DIR}/cybld")

  add_custom_target(create_binding_symlink_python ALL)
  file(GLOB BindingFiles
    "${CMAKE_CURRENT_SOURCE_DIR}/python/abstract_types.py"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/metadata.py"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/common.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/converter.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/exceptions.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/flags.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_containers.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_exceptions.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_serializer.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_typeinfos.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_types.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/protocol.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/serializer.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/std_libcpp.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/types.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/adapter.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/common.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/converter.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/exceptions.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/flags.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_containers.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_exceptions.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_serializer.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_typeinfos.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/mutable_types.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/protocol.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/serializer.pyx"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/flags.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/types.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/python/Serializer.h"
  )
  file(MAKE_DIRECTORY "${_cybld}/thrift/python/")

  foreach(_src ${BindingFiles})
    get_filename_component(_target_file "${_src}" NAME)

    message(
      STATUS
      "Linking ${_src} to ${_cybld}/thrift/python/${_target_file}"
    )

    add_custom_command(
      TARGET
      create_binding_symlink_python
      PRE_BUILD
        COMMAND
        ${CMAKE_COMMAND} -E create_symlink "${_src}" "${_cybld}/thrift/python/${_target_file}"
    )
  endforeach()

  # types.pyx must be handled specially due to generating types_api.h
  foreach(
    _src
      "${CMAKE_CURRENT_SOURCE_DIR}/python/types.pxd"
      "${CMAKE_CURRENT_SOURCE_DIR}/python/types.pyx"
  )
    get_filename_component(_target_file "${_src}" NAME)

    message(
      STATUS
      "Linking ${_src} to ${_cybld}/thrift/python/_${_target_file}"
    )

    add_custom_command(
      TARGET
      create_binding_symlink_python
      PRE_BUILD
        COMMAND
        ${CMAKE_COMMAND} -E create_symlink "${_src}" "${_cybld}/thrift/python/_${_target_file}"
    )
  endforeach()

  add_custom_target(create_binding_symlink_py3 ALL)
  file(GLOB BindingFiles
    "${CMAKE_CURRENT_SOURCE_DIR}/py3/*.pxd"
    "${CMAKE_CURRENT_SOURCE_DIR}/py3/*.pyx"
  )
  file(MAKE_DIRECTORY "${_cybld}/thrift/py3/")

  foreach(_src ${BindingFiles})
    get_filename_component(_target_file "${_src}" NAME)

    message(
      STATUS
      "Linking ${_src} to ${_cybld}/thrift/py3/${_target_file}"
    )

    add_custom_command(
      TARGET
      create_binding_symlink_py3
      PRE_BUILD
        COMMAND
        ${CMAKE_COMMAND} -E create_symlink "${_src}" "${_cybld}/thrift/py3/${_target_file}"
    )
  endforeach()

  set(prop "$<TARGET_PROPERTY:thrift,INCLUDE_DIRECTORIES>")
  get_target_property(FMT_INCLUDE_DIR fmt::fmt INTERFACE_INCLUDE_DIRECTORIES)
  set(incs "-I$<JOIN:${prop},:>:${FOLLY_INCLUDE_DIR}:${Boost_INCLUDE_DIRS}:${FMT_INCLUDE_DIR}:${CMAKE_BINARY_DIR}/thrift/lib/cybld")
  get_filename_component(folly_lib ${FOLLY_LIBRARY} DIRECTORY)
  set(libs "-L${CMAKE_BINARY_DIR}:${folly_lib}")

  add_custom_target(
    thrift_python_and_py3_bindings ALL
    DEPENDS
      create_binding_symlink_python
      create_binding_symlink_py3
      thriftcpp2
    WORKING_DIRECTORY ${_cybld})

  add_custom_command(TARGET thrift_python_and_py3_bindings
    COMMAND
      python ${CMAKE_CURRENT_SOURCE_DIR}/setup.py
      build_ext -f ${incs} ${libs}
    BYPRODUCTS ${_cybld}/thrift/python/types_api.h
    WORKING_DIRECTORY ${_cybld}
  )

  add_library(
    thrift_python_cpp
      python/Serializer.cpp
      python/types.cpp
  )

  add_dependencies(thrift_python_cpp thrift_python_and_py3_bindings)
  set_property(TARGET thrift_python_cpp PROPERTY VERSION ${PACKAGE_VERSION})
  target_compile_definitions(thrift_python_cpp PRIVATE BOOST_NO_AUTO_PTR)
  target_include_directories(thrift_python_cpp PRIVATE "${_cybld}")
  target_link_libraries(thrift_python_cpp PUBLIC thrift)

  install(
    TARGETS thrift_python_cpp
    EXPORT thrift
    DESTINATION ${CMAKE_INSTALL_PREFIX}
  )
  install(
    TARGETS thrift_python_cpp
    DESTINATION ${PYTHON_INSTALL_DIR}
  )

  add_custom_command(TARGET thrift_python_and_py3_bindings
    COMMAND
      python ${CMAKE_CURRENT_SOURCE_DIR}/setup.py
      bdist_wheel
    WORKING_DIRECTORY ${_cybld}
  )

  add_custom_command(TARGET thrift_python_and_py3_bindings POST_BUILD
    COMMAND
      python ${CMAKE_CURRENT_SOURCE_DIR}/setup.py
      install --prefix ${CMAKE_INSTALL_PREFIX}
    WORKING_DIRECTORY ${_cybld}
  )

  # Install to a second directory. Unfrotunately, setting CMAKE_INSTALL_PREFIX
  # directly does not play nicely with getdeps.py.
  if (NOT ${PYTHON_INSTALL_DIR} STREQUAL "")
    install(CODE "
      execute_process(
        COMMAND
          python ${CMAKE_CURRENT_SOURCE_DIR}/setup.py install
          --prefix ${PYTHON_INSTALL_DIR}
        COMMAND_ECHO STDOUT
        WORKING_DIRECTORY ${_cybld}
      )"
    )
  endif()
endif()

set(LIB_DIRS
  thrift
  cpp
  cpp2
  python
  py3
)
foreach(dir ${LIB_DIRS})
  install(DIRECTORY ${dir} "${CMAKE_CURRENT_BINARY_DIR}/${dir}"
        DESTINATION include/thrift/lib
        FILES_MATCHING
          PATTERN "*.h"
          PATTERN "*.tcc"
          PATTERN CMakeFiles EXCLUDE)
endforeach()
