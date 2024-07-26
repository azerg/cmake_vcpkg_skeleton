cmake_minimum_required(VERSION 3.20)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_CONFIGURATION_TYPES "Debug;RelWithDebInfo" CACHE STRING "" FORCE)

project(SampleApp VERSION 3.0)

# Add subdirectories for the projects
add_subdirectory(app)
add_subdirectory(sampleLib)