#include <iostream>
#include <string>

// Define a struct to represent a Person
struct Person {
    std::string name;
    int age;
    double height;
};

int main() {
    // Create an instance of Person and assign values
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 1.65;

    // Create another instance using aggregate initialization
    Person person2 = {"Bob", 25, 1.80};

    // Print the details of person1
    std::cout << "Person 1:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << " m" << std::endl;

    std::cout << std::endl;

    // Print the details of person2
    std::cout << "Person 2:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;
    std::cout << "Height: " << person2.height << " m" << std::endl;

    return 0;
}
