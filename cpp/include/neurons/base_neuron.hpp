

#include <vector>

class BaseNeuron {
    private:
        std::vector<BaseNeuron*> inputs;
        std::vector<float> weights;
        std::vector<float> biases;
        int num_inputs = 0;

        // Parameters
        float min_weight = -1;
        float max_weight = 1;
        float min_bias = -1;
        float max_bias = 1;
    
    protected:
        float output = 0;
        bool updated_output = false;
        float internal_output = 0;
        // Helper Functions
        float compute_internal_output();

    public:
        virtual float compute_output()=0;
        float get_output();
        void add_input(BaseNeuron*);
        void update_inputs();
        bool update_parameters();
};