#include <iostream>
#include <string>

int main() {
    int monthNumber;
    
    std::cout << "Enter a number (1-12) to get the corresponding month name: ";
    std::cin >> monthNumber;

    switch(monthNumber) {
        case 1:
            std::cout << "Month 1: January" << std::endl;
            break;
        case 2:
            std::cout << "Month 2: February" << std::endl;
            break;
        case 3:
            std::cout << "Month 3: March" << std::endl;
            break;
        case 4:
            std::cout << "Month 4: April" << std::endl;
            break;
        case 5:
            std::cout << "Month 5: May" << std::endl;
            break;
        case 6:
            std::cout << "Month 6: June" << std::endl;
            break;
        case 7:
            std::cout << "Month 7: July" << std::endl;
            break;
        case 8:
            std::cout << "Month 8: August" << std::endl;
            break;
        case 9:
            std::cout << "Month 9: September" << std::endl;
            break;
        case 10:
            std::cout << "Month 10: October" << std::endl;
            break;
        case 11:
            std::cout << "Month 11: November" << std::endl;
            break;
        case 12:
            std::cout << "Month 12: December" << std::endl;
            break;
        default:
            std::cout << "Invalid number! Please enter a number between 1 and 12." << std::endl;
            break;
    }
    
    return 0;
}
