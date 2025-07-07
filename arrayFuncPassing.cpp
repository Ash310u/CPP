#include <iostream>

// Function that takes an array as parameter
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function that modifies array elements
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    std::cout << "Original array elements :" << std::endl;
    printArray(numbers, size);
    
    // Pass array to function that modifies it
    doubleArray(numbers, size);
    
    std::cout << "After doubling:" << std::endl;
    printArray(numbers, size);
    
    return 0;
}
