#include <iostream>

// Example of inheritance in C++
class Animal {
    public:
        std::string name;
        std::string color;
        void eat() {
            std::cout << name << " is eating." << std::endl;
        }
};

class Dog : public Animal {
    public: 
        std::string breed;
        void bark() {
            std::cout << name << " is barking." << std::endl;
        }
};

class Cat : public Animal {
    public: 
        std::string breed;
        void meow() {
            std::cout << name << " is meowing." << std::endl;
        }
};

int main() {
    Cat cat = {"Bella", "White", "Persian"};
    cat.eat();
    cat.meow();
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Cat's name: " << cat.name << std::endl;
    std::cout << "Cat's color: " << cat.color << std::endl;
    std::cout << "Cat's breed: " << cat.breed << std::endl;
    std::cout << "--------------------------------" << std::endl;

    Dog dog = {"Blacky", "Black", "Golden Retriever"};
    std::cout << "Dog's name: " << dog.name << std::endl;
    std::cout << "Dog's color: " << dog.color << std::endl;
    std::cout << "Dog's breed: " << dog.breed << std::endl;
    std::cout << "--------------------------------" << std::endl;
    dog.eat();
    dog.bark();
    std::cout << "--------------------------------" << std::endl;
    return 0;
}