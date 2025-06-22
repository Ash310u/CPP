#include <iostream>

int main() {
    std::string name;
    int age;
 
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    
    return 0;
}