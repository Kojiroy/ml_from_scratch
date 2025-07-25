cmake_minimum_required(VERSION 3.20)
# Test 1: Uses only Perceptron
add_executable(test_perceptron test_perceptron.cpp)
target_link_libraries(test_perceptron neurons)

# Test 2: Uses only Sigmoid
add_executable(test_sigmoid test_sigmoid.cpp)
target_link_libraries(test_sigmoid neurons)
