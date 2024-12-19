# Do not call directly, use cmake
#
# Cython requires source files in a specific structure, the structure is
# created as tree of links to the real source files.

import sys

from Cython.Build import cythonize
from Cython.Compiler import Options
from setuptools import Extension, setup

Options.fast_fail = True

libs = [
    "folly",
    "folly_python_cpp",
    "thriftcpp2",
    "thrift_python_cpp",
    "thriftmetadata",
]

exts = [
    # thrift.python extension modules
    Extension(
        "thrift.python.adapter",
        sources=["thrift/python/adapter.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.common",
        sources=["thrift/python/common.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.converter",
        sources=["thrift/python/converter.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.exceptions",
        sources=["thrift/python/exceptions.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.flags",
        sources=["thrift/python/flags.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_containers",
        sources=["thrift/python/mutable_containers.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_exceptions",
        sources=["thrift/python/mutable_exceptions.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_serializer",
        sources=["thrift/python/mutable_serializer.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_typeinfos",
        sources=["thrift/python/mutable_typeinfos.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.mutable_types",
        sources=["thrift/python/mutable_types.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.protocol",
        sources=["thrift/python/protocol.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.serializer",
        sources=["thrift/python/serializer.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.types",
        sources=["thrift/python/_types.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    # thrift.py3 extension modules
    Extension(
        "thrift.py3.common",
        sources=["thrift/py3/common.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.py3.exceptions",
        sources=["thrift/py3/exceptions.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.py3.serializer",
        sources=["thrift/py3/serializer.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.py3.server",
        sources=["thrift/py3/server.pyx"],
        libraries=libs,
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
]

if "--types-only" in sys.argv:
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
    packages=["thrift", "thrift.python", "thrift.py3"],
    package_data={"": [".*pxd", ".*h"]},
    setup_requires=["cython"],
    zip_safe=False,
    ext_modules=cythonize(exts, compiler_directives={"language_level": 3}),
)
