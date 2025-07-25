cmake_minimum_required(VERSION 3.20)
project(BrainSim)

# Enable C++ features
set(CMAKE_CXX_STANDARD 17)

# Include the directories for headers
include_directories(include)

# Add Neurons and Tests subdirectories
add_subdirectory(src/neurons)
add_subdirectory(tests)
