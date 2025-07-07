#include <iostream>

int main() {
    // sizeof with different data types
    std::cout << "Size of different data types:" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    
    std::cout << "\nSize of variables:" << std::endl;
    int number = 42;
    char letter = 'A';
    double price = 19.99;
    
    std::cout << "Size of number (int): " << sizeof(number) << " bytes" << std::endl;
    std::cout << "Size of letter (char): " << sizeof(letter) << " bytes" << std::endl;
    std::cout << "Size of price (double): " << sizeof(price) << " bytes" << std::endl;
    
    std::cout << "\nSize of arrays:" << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};
    char str[] = "Hello";
    
    std::cout << "Size of arr (int[5]): " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Size of str (char[]): " << sizeof(str) << " bytes" << std::endl;
    std::cout << "Number of elements in arr: " << sizeof(arr) / sizeof(arr[0]) << std::endl;
    std::cout << "Number of elements in str: " << sizeof(str) / sizeof(str[0]) << std::endl;
    
    std::cout << "\nSize of pointers:" << std::endl;
    int* ptr = &number;
    std::cout << "Size of ptr (int*): " << sizeof(ptr) << " bytes" << std::endl;
    std::cout << "Size of *ptr (dereferenced): " << sizeof(*ptr) << " bytes" << std::endl;
    
    return 0;
}
