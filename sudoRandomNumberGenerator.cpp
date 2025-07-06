#include <iostream>
#include <ctime>

int main() {
    std::srand(std::time(0));
    // % 6 is the range of the random number
    // + 1 is the starting point of the random number
    int randomNumber = (std::rand() % 6) + 1;
    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;
}