# CMakeList.txt : CMake project for SquareRoots, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (SquareRoots "main.cpp" )

target_link_libraries(SquareRoots "sqrt")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SquareRoots PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
