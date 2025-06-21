#include <iostream>
#include <vector>

// _t is a common convention for type aliases

// typedef is a C++98 feature
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

// using is a C++11 feature
// exact same thing as above but using 'using' keyword
using pairlist_t = std::vector< std::pair< std::string, int > >;
using text_t = std::string;

int main() {
    text_t firstName = "John";
    std::cout << firstName << " is " << firstName.length() << " characters long" << std::endl;
    
    std::pair<std::string, int> person = {"John", 25};
    std::cout << person.first << " is " << person.second << " years old" << std::endl;

    pairlist_t v = {{"John", 25}, {"Jane", 30}};
    std::cout << v[0].first << " is " << v[0].second << " years old" << std::endl;
    std::cout << v[1].first << " is " << v[1].second << " years old" << std::endl;
    
    return 0;
}