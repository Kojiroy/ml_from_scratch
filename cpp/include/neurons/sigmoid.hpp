#include "neurons/base_neuron.hpp"
#include<cmath>

class Sigmoid : public BaseNeuron {
    private:
        float sigmoid(float);

    public:
        float compute_output() override;
};