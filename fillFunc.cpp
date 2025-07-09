#include <iostream>

int main() {
    int numbers[10];
    
    // Fill the array with the value 5 int.
    std::fill(numbers, numbers + 10, 5);
    std::cout << "Array after fill: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    std::string yoos[10];
    
    // Fill the array with the value "Yoo..." string.
    std::fill(yoos, yoos + 10, "Yoo...");
    std::cout << "Array after fill: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << yoos[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}