#include <iostream>

void printCircumferenceAndArea(const double &PI, const double radius);

int main() {
    // const is a keyword that is used to declare a constant variable
    // tells the compiler to prevent anything form modifying it. (read-only)
    const double PI = 3.14;
    double radius = 5.0;
    
    // pi = 100; // this will cause an error because pi is a constant
    
    printCircumferenceAndArea(PI, radius);
    return 0;
}

void printCircumferenceAndArea(const double &PI, const double radius) {
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    
    std::cout << "Area: " << area << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
}