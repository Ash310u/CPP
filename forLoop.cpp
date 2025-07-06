#include <iostream>

int main() {
    // for loop
    // for (int i = 1; i <= 10; i++) {
    //     std::cout << i << std::endl;
    // }

    // Nested for loop
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
    }


    return 0;
}