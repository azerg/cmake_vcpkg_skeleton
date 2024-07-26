add_executable(ExampleApp main.cpp)

target_include_directories(ExampleApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

set_property(TARGET ExampleApp PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_link_libraries(ExampleApp ExampleLib)
add_dependencies(ExampleApp ExampleLib)