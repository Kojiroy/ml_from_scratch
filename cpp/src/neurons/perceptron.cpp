#include "neurons/perceptron.hpp"

float Perceptron::compute_output() {
    compute_internal_output();
    updated_output = true;
    output = internal_output > 0 ? 1 : 0;
    return output;
}