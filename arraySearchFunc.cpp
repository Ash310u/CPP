#include <iostream>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target = 3;
    int index = linearSearch(numbers, size, target);
    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }
    return 0;
}
