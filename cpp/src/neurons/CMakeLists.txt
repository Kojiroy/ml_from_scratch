cmake_minimum_required(VERSION 3.20)

add_library(neurons
    base_neuron.cpp
    perceptron.cpp
    sigmoid.cpp
    )
    
# Expose public headers to other targets
target_include_directories(neurons PUBLIC ${CMAKE_SOURCE_DIR}/include)
