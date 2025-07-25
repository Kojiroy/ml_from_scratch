#include "neurons/sigmoid.hpp"

float Sigmoid::sigmoid(float num) {
    return 1/(1+exp(-num));
}

float Sigmoid::compute_output() {
    compute_internal_output();
    output = sigmoid(internal_output);
    updated_output = true;
    return output;
}