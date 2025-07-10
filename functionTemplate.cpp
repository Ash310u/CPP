#include <iostream>
#include <string>

// Function template to return the maximum of two values
template <typename T, typename U>
T max(T a, U b) {
    return (a > b) ? a : b;
}

// Function template to swap two values
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Example 1: Using max with int
    int x = 10, y = 20;
    std::cout << "Max of " << x << " and " << y << " is " << max(x, y) << std::endl;

    // Example 2: Using max with double
    double a = 3.14, b = 2.71;
    std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;

    // Example 3: Using max with std::string
    std::string s1 = "apple", s2 = "banana";
    std::cout << "Max of \"" << s1 << "\" and \"" << s2 << "\" is \"" << max(s1, s2) << "\"" << std::endl;

    // Example 4: Using mySwap with int
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    mySwap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Example 5: Using mySwap with std::string
    std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    mySwap(s1, s2);
    std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;

    return 0;
}
