add_library(ExampleLib main.cpp exampleLib.h)

find_package(ada CONFIG REQUIRED)
target_link_libraries(ExampleLib PRIVATE ada::ada)

set_property(TARGET ExampleLib PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_include_directories(ExampleLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})