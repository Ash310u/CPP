#include <iostream>

int main() {
    // Declaring variables to store user input
    std::string name;
    int age;
 
    // Prompting user to enter their name
    std::cout << "Enter your name: ";    
    // Reading the full name including spaces using getline
    // std::getline(std::cin, name);
    
    // If we put a std::cin above getline will take '\n' as input and not the full name 
    // and to prevent that we need to use std::ws to ignore any newline character or whitespace.
    std::getline(std::cin >> std::ws, name);
    
    // Prompting user to enter their age
    std::cout << "Enter your age: ";
    // Reading age as an integer
    std::cin >> age;
    
    // Displaying personalized greeting with user's name and age
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}