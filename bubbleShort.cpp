#include <iostream>

void bubbleSort(int arr[], int size);

int main() {
    int numbers[] = {5, 3, 8, 4, 2, 1, 6, 7, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    bubbleSort(numbers, size);
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

}

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}