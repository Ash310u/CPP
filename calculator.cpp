#include <iostream>

int main() {
    char op;
    double num1, num2;

    std::cout << "* * * * * * * * * * * * Calculator * * * * * * * * * * * *" << std::endl;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    if(!num1) {
        std::cout << "Number 1 is not valid" << std::endl;
        return 1;
    }
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if(!num2) {
        std::cout << "Number 2 is not valid" << std::endl;
        return 1;
    }
    
    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> op;
    
    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << "Result: " << num1 / num2 << std::endl;
            break;
        default :
            std::cout << "This calculator can only handle +, -, *, / operations" << std::endl;
            break;
    }
    
    return 0;
}