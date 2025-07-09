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
    
    
    const int size = 100;
    std::string yoos[size];
    
    // Fill the array with the value "Yoo..." & "Loo..." string.
    std::fill(yoos, yoos + (size/2), "Yoo...");
    
    // first arg is the start of the array, second arg is the end of the array.
    std::fill(yoos + (size/2), yoos + size, "Loo...");
    
    std::cout << "Array after fill: ";
    for (int i = 0; i < size; ++i) {
        std::cout << yoos[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}