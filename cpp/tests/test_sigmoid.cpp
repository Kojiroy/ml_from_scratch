#include <neurons/sigmoid.hpp>
#include <exception>
#include <iostream>

int main() {
    Sigmoid p;
    float test_result;
    try {
        std::cout << "Computing output..." << std::endl;
        test_result = p.compute_output();
        printf("Successfully computed output: %f\n", test_result);
        std::cout << "Getting output..." << std::endl;
        test_result = p.get_output();
        printf("Successfully got output: %f\n", test_result);
        std::cout << "Updating inputs..." << std::endl;
        p.update_inputs();
        printf("Successfully updated inputs: %f\n", test_result);
        std::cout << "Updating parameters..." << std::endl;
        if (p.update_parameters()) {
            printf("Successfully updated parameters: %f\n", test_result);
        }
        else {
            throw std::runtime_error("Failed to update parameters!");
        }
    }
    catch(const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return -1;
    }

    std::cout << "Successfully ran all tests for sigmoid!" << std::endl;

    return 0;
}
