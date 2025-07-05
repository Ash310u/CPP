#include <iostream>

int main() {
    double temperature;
    char unit;

    std::cout << "********** Temperature Conversion **********" << std::endl;
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;
    std::cout << "Enter the unit (C or F): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "The temperature in Celsius is: " << (temperature - 32.0) * 5/9 << " Degree"<< std::endl;
    } else if(unit == 'C' || unit == 'c') {
        std::cout << "The temperature in Fahrenheit is: " << (temperature * 9/5) + 32.0 << " Degree" << std::endl;
    } else {
        std::cout << "Invalid unit" << std::endl;
    }
    
    return 0;
}