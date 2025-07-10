#include <iostream>

class Car {
    public:
        // Default values
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "The car is accelerating : VROOM..." << std::endl;
        }
        void brake() {
            std::cout << "The car is braking : SCRREECH..." << std::endl;
        }
};

int main() {
    Car maclaren = { "Maclaren", "720S", 2024, "Red" };
    maclaren.accelerate();
    maclaren.brake();
    return 0;
}