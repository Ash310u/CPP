#include <iostream>
#include <string>

// Define a struct to represent a Person
struct Person {
    std::string name;
    int age;
    double height;
};

void printPerson(Person person);

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
    printPerson(person1);

    std::cout << std::endl;
    
    std::cout << "Person 2:" << std::endl;
    // Print the details of person2
    printPerson(person2);

    return 0;
}

void printPerson(Person person) {
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << " m" << std::endl;
}