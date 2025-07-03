#include <iostream>

int main () {
    int age;
    std::string msg1 = "You are";
    std::string gaurd = "not allowed";
    std::string msg2 = "to eat Pizza!";

    std::cout << "Enter your age: ";
    std::cin >> age;
    if(age >= 5) {
        gaurd = "allowed";
        std::cout << "You are " << age << ", " << msg1 << " " << gaurd << " " << msg2 << std::endl;
    }
    else {
        std::cout << "You are " << age << ", " << msg1 << " " << gaurd << " " << msg2 << std::endl;
    }
    return 0;
}