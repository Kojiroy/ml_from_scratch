#include "neurons/base_neuron.hpp"


class Perceptron : public BaseNeuron {
    public:
        float compute_output() override;
};
