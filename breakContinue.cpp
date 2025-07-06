#include <iostream>

int main() {
    // break
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << " Breaking at " << i << " not going to run the rest of the loop";
            break;
        }
        std::cout << i << ",";
    }
    std::cout << std::endl;

    // continue
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << " Skipping \"" << i << "\" ,";
            continue;
        }
        std::cout << i << ",";
    }
    std::cout << std::endl;
    
    return 0;
}