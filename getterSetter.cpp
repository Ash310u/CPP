#include <iostream>

class Stove {
    private:
        double temperature; // temperature is private

    public:
    
    // Naming is just convention, you can name it whatever you want
    // but it's better to name it like this
    // Getter for temperature (it's make a private variable readable)
    double getTemperature() {
        return temperature;
    }
    // Setter for temperature (it's make a private variable writable)
    void setTemperature(double temp) {
        if( temp < 0) {
            temperature = 0 ;
        } else if( temp >= 100) {
            temperature = 100;
        } else {
            temperature = temp;
        }
    }
};

int main() {
    Stove stove;
    stove.setTemperature(11);
    std::cout << "Temperature is: " << stove.getTemperature() << "°C" << std::endl;
    return 0;
}
