#include <iostream>


int linearSearch(std::string arr[], int size, std::string target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    std::string names[] = {"John", "Jane", "Jim", "Jill", "Jack"};
    int size = sizeof(names) / sizeof(names[0]);

    std::string target = "Jim";
    int index = linearSearch(names, size, target);
    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }
    return 0;
}
