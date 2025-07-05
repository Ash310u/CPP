#include <iostream>

int main() {
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "String length method (Number): " << name.length() << " characters" << std::endl;
    
    std::cout << "String is empty method (Boolean): " << name.empty() << std::endl;

    name.insert(0, "Mr. ");
    std::cout << "name.insert(0, \"Mr. \") method (String) insert a string: " << name << std::endl;
    
    name.clear();
    std::cout << "name.clear() method (String) clears the whole string." << name << std::endl;
    
    name.append("remove it Ash310u");
    std::cout << "name.append() method (String) append a string: " << name<< std::endl;
    
    // first arg is beginning index, second arg is length of string to erase
    name.erase(0, 10);
    std::cout << "name.erase() method (String) erase a string:" << name << std::endl;

    name.at(0) = '@';
    std::cout << "name.at(0) = 'J' method (String) change the first character:  " << name << std::endl;

    int index = name.find("@");
    std::cout << "name.find() method (String) find a string: " << index << std::endl;

    name.replace(index, 1, "Mr. A");
    std::cout << "name.replace() method (String) replace a string: " << name << std::endl;

    return 0;
}