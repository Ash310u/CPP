#include <iostream>

int main() {
    std::string name;
    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } while (name.empty());
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}