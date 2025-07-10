#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

        // Constructor
        Student(std::string name, int age, double gpa) {
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
        
        // If params are different, we don't need "this" keyword
        // Student(std::string x, int y, double z) {
        //     name = x;
        //     age = y;
        //     gpa = z;
        // }

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
    Student s2("Morty Smith", 14, 2.5);
    Student s3("Summer Smith", 16, 3.0);
    
    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    
    return 0;
}