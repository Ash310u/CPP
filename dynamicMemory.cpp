#include <iostream>

int main() {
    // 1. Using new and delete for single variable
    int* pInt = new int(10);
    std::cout << "Value at pInt (new int): " << *pInt << std::endl;
    delete pInt;

    // 2. Using new and delete[] for array
    int* pArr = new int[5]{1, 2, 3, 4, 5};
    std::cout << "Array allocated with new[]: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << pArr[i] << " ";
    }
    std::cout << std::endl;
    delete[] pArr;

    return 0;
}
