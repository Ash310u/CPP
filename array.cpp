#include <iostream>

int main() {
    // Declare a normal array
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Print array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Access and modify elements
    std::cout << "Element at index 2: " << arr[2] << std::endl;
    arr[2] = 100;
    std::cout << "After modifying index 2: " << arr[2] << std::endl;
    
    // Print modified array
    std::cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
