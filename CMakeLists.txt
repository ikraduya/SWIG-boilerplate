cmake_minimum_required(VERSION 3.19 FATAL_ERROR)

project(PROJECTNAME)

option(PROJECT_ENABLE_PYTHON "Build Python extension." ON)

add_subdirectory(src)
add_subdirectory(test)

if(PROJECT_ENABLE_PYTHON)
  add_subdirectory(python)
endif()