#include <iostream>

int main() {
    int age = 18;
    bool hasLicense = true;
    
    if(age >= 18 && hasLicense) {
        std::cout << "You are eligible to drive" << std::endl;
    } else {
        std::cout << "You are not eligible to drive" << std::endl;
    }

    if(age >= 18 || hasLicense) {
        std::cout << "You are eligible to drive" << std::endl;
    } else {
        std::cout << "You are not eligible to drive" << std::endl;
    }

    if(!hasLicense) {
        std::cout << "You are not eligible to drive" << std::endl;
    } else {
        std::cout << "You are eligible to drive" << std::endl;
    }
    
    return 0;
}