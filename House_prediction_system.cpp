#include <iostream>
#include <random>

using namespace std;

class propogation{
public:
    
};

class dataloader {
public:
    int training_data;
    int epochs;
    long int* x;
    int* actual;

    dataloader(int training_data, int epochs) {
        this->training_data = training_data;
        this->epochs = epochs;
    }

    void generate_data() {
        x = new long int[training_data];
        actual = new int[training_data];

        random_device rd;
        mt19937 gen(rd());

        uniform_int_distribution<long int> below_threshold(10000, 99000);
        uniform_int_distribution<long int> above_threshold(100000, 600000);

        for (int i = 0; i < training_data; i++) {
            bool is_above = (i % 2 == 0);

            if (is_above) {
                x[i] = above_threshold(gen);
                actual[i] = 1;
            }
            else {
                x[i] = below_threshold(gen);
                actual[i] = 0;
            }
        }
    }

    void print_data() {

        for (int i = 0; i < training_data; i++) {
            cout << "Training data - actual result " << endl;
            cout << x[i] << "--" << actual[i] << endl;
        }
    }
};

int main() {
    dataloader d(10000, 100);
    d.generate_data();
    d.print_data();
    return 0;
}

