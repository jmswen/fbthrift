# Do not call directly, use cmake
#
# Cython requires source files in a specific structure, the structure is
# created as tree of links to the real source files.

from Cython.Build import cythonize
from Cython.Compiler import Options
from setuptools import Extension, setup

Options.fast_fail = True

exts = [
    Extension(
        "thrift.python.common",
        sources=["thrift/python/common.pyx"],
        libraries=["folly"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.exceptions",
        sources=["thrift/python/exceptions.pyx"],
        libraries=["folly"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.protocol",
        sources=["thrift/python/protocol.pyx"],
        libraries=["folly"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
    Extension(
        "thrift.python.types",
        sources=["thrift/python/types.pyx"],
        libraries=["folly"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
]

setup(
    name="thrift",
    version="0.0.1",
    packages=["thrift"],
    package_data={"": [".*pxd", ".*h"]},
    setup_requires=["cython"],
    zip_safe=False,
    ext_modules=cythonize(exts, compiler_directives={"language_level": 3}),
)
