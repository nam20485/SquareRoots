add_library(sqrt SHARED  "sqrt.h" "sqrt_export.h" "bssqrt.cpp" "sqrt.cpp")


target_include_directories(sqrt
                           INTERFACE
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                           $<INSTALL_INTERFACE:include>)
