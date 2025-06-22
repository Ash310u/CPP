#include <iostream>  
#include <cmath>

int main() {
    double x = 2.0;
    double y = 3.0;

    // returns the square root of x
    std::cout << "sqrt(" << x << ") = " << std::sqrt(x) << std::endl;
    
    // returns the cube root of x
    std::cout << "cbrt(" << x << ") = " << std::cbrt(x) << std::endl;
    
    // rounds to the nearest integer
    std::cout << "round(" << x << ") = " << std::round(-2.5) << std::endl;
    
    // rounds up to the nearest integer
    std::cout << "ceil(" << x << ") = " << std::ceil(-2.5) << std::endl;
    
    // rounds down to the nearest integer
    std::cout << "floor(" << x << ") = " << std::floor(-2.5) << std::endl;
    
    // returns the absolute value of x
    std::cout << "abs(" << x << ") = " << std::abs(-2.5) << std::endl;
    
    // returns the smaller of x and y
    std::cout << "min(" << x << ", " << y << ") = " << std::min(x, y) << std::endl;
    
    // returns the larger of x and y
    std::cout << "max(" << x << ", " << y << ") = " << std::max(x, y) << std::endl;
    
    // returns x to the power of y
    std::cout << "pow(" << x << "," << y << ") = " << std::pow(x, y) << std::endl;

    return 0;
}