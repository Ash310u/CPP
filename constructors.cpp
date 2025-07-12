#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;
        
        // Default constructor
        // constructor Overloading 
        // C++ distinguishes overloaded functions/constructors only by their parameter *types* and *number*, not by parameter names.
        // This syntax is called a "member initializer list" in C++.
        Student() : name("Unknown"), age(0), gpa(0.0) {
            std::cout << "Default constructor" << std::endl;
        }

        // Constructor with name, age, and gpa
        Student(std::string name, int age, double gpa)
            : name(name), age(age), gpa(gpa) {
                std::cout << "Constructor with name, age, and gpa" << std::endl;
            }

        // Constructor with name and age
        Student(std::string name, int age)
            : name(name), age(age), gpa(0.0) {
                std::cout << "Constructor with name and age" << std::endl;
            }

        // Constructor with name only
        Student(std::string name)
            : name(name), age(0), gpa(0.0) {
                std::cout << "Constructor with name only" << std::endl;
            }

        // Member function
        void printInfo() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "GPA: " << gpa << std::endl;
            std::cout << "--------------------------------" << std::endl;
        }
    };
    
int main() {
    Student s1("Rick Sanchez", 70, 3.5);
    Student s2("Morty Smith", 14);
    Student s3("Summer Smith");
    // if not gonna give any parameter then dont call it just create with "Student s4;", it will call the default constructor
    Student s4;
    std::cout << "--------------------------------" << std::endl;

    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    s4.printInfo();
    
    return 0;
}