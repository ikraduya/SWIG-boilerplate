# SWIG-boilerplate

A project to try out SWIG on C++ using CMake as the build system. Currently only support Python wrapper.

This project has only been tested on GNU/Linux.

## Build
The following should be required:
- cmake >= 3.19
- swig >= 3.0
- python-dev

To build and test:
```shell
$ # Build libraries
$ mkdir build && cd build
$ cmake ..
$ make
$ # The python wrapper will be installed on build/python
$ # Go to test dir from root
$ cd ../test
$ # Set PYTHONPATH
$ ./setpypath.sh
$ python test.sh
```



