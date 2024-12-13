from Cython.Build import cythonize
from Cython.Compiler import Options
from setuptools import Extension, setup


Options.fast_fail = True

exts = [
    Extension(
        "thrift.python.protocol",
        sources=["thrift/python/protocol.pyx"],
        language="c++",
        extra_compile_args=["-std=c++17"],
    ),
]

setup(
    name="thrift",
    version="0.0.1",
    packages=["thrift", "thrift.python"],
    package_data={"": [".*pxd", "*.h"]},
    setup_requires=["cython"],
    zip_safe=False,
    ext_modules=cythonize(
        exts,
        compiler_directives={"language_level": 3},
    ),
)

