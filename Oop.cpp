#include <iostream>

class Human {
    public:
        // Default values
        std::string name = "Unknown";
        int age = 0;
        bool isAlive = false;

        void printInfo() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "Alive: " << isAlive << std::endl;
            std::cout << "--------------------------------" << std::endl;
        }
        
        void setName(std::string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
        void setAlive(bool isAlive = false) {
            this->isAlive = isAlive;
        }
};

int main() {
    Human human1 = { "Rick", 70, true };
    human1.printInfo();

    Human human2;
    human2.setName("Morty");
    human2.setAge(14);
    human2.setAlive(false);
    human2.printInfo();

    Human human3;
    human3.printInfo();
    return 0;
}