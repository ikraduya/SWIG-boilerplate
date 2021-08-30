set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(PROJECT_SRC
  simple/example.cpp
  class/kitty.cpp
)

set(PROJECT_HEADERS
  simple/example.hpp
  class/kitty.hpp
)

add_library(projectname ${PROJECT_SRC})
