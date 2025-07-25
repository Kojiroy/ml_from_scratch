#include "neurons/base_neuron.hpp"
#include "chrono"
#include "random"

float BaseNeuron::compute_internal_output() {
    internal_output = 0;
    for (int i = 0; i<num_inputs; i++) {
        internal_output += (inputs[i] -> get_output()) * weights[i] + biases[i];
    }
    return internal_output;
}

float BaseNeuron::get_output() {
    // if (updated_output) return 
    return updated_output ? output : compute_output();
}

void BaseNeuron::add_input(BaseNeuron* input) {
    inputs.push_back(input);
    num_inputs++;
    // Add random weights and biases
    static std::mt19937 eng(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> weight_dist(min_weight, max_weight);
    std::uniform_real_distribution<float> bias_dist(min_bias, max_bias);

    weights.push_back(weight_dist(eng));
    biases.push_back(bias_dist(eng));
    // TODO:WILL Test to see that biases and weights are different
}

void BaseNeuron::update_inputs() {
    updated_output = false;
}

bool BaseNeuron::update_parameters() {
    return true;
}