# Do not call directly, use cmake
#
# Cython requires source files in a specific structure, the structure is
# created as tree of links to the real source files.

import sys

from Cython.Build import cythonize
from Cython.Compiler import Options
from setuptools import Extension, setup

Options.fast_fail = True

exts = [
    Extension(
        "thrift.python.adapter",
        sources=["thrift/python/adapter.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.common",
        sources=["thrift/python/common.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.converter",
        sources=["thrift/python/converter.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.exceptions",
        sources=["thrift/python/exceptions.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.flags",
        sources=["thrift/python/flags.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_containers",
        sources=["thrift/python/mutable_containers.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_exceptions",
        sources=["thrift/python/mutable_exceptions.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_serializer",
        sources=["thrift/python/mutable_serializer.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_typeinfos",
        sources=["thrift/python/mutable_typeinfos.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_types",
        sources=["thrift/python/mutable_types.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.protocol",
        sources=["thrift/python/protocol.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.serializer",
        sources=["thrift/python/serializer.pyx"],
        libraries=["folly", "thriftcpp2", "thrift_python_cpp", "thriftmetadata"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
]

if "build_ext" not in sys.argv:
    exts.append(
        Extension(
            "thrift.python.types",
            sources=["thrift/python/_types.pyx"],
            libraries=["folly", "thriftcpp2"],
            language="c++",
            extra_compile_args=["-std=c++17"],
        )
    )
elif "--types-only" in sys.argv:
    exts = [
        Extension(
            "thrift.python.types",
            sources=["thrift/python/_types.pyx"],
            libraries=["folly", "thriftcpp2"],
            language="c++",
            extra_compile_args=["-std=c++17"],
        )
    ]
    sys.argv.remove("--types-only")

setup(
    name="thrift",
    version="0.0.1",
    packages=["thrift", "thrift.python"],
    package_data={"": [".*pxd", ".*h"]},
    setup_requires=["cython"],
    zip_safe=False,
    ext_modules=cythonize(exts, compiler_directives={"language_level": 3}),
)
