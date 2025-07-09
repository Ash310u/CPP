#include <iostream>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int numbers[] = {5, 3, 8, 4, 2, 1, 6, 7, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printArray(numbers, size);
    
    bubbleSort(numbers, size);
    
    printArray(numbers, size);

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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}