#include <iostream>
#include <vector>
#include <string>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    
    for (int& num : numbers) {
        num *= 2;
    }
    std::cout << std::endl;
    
    std::cout << "Array elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
        
    return 0;
}
