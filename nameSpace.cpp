#include <iostream>

// A namespace in C++ is a declarative region that provides 
// a scope for identifiers such as variables, functions, classes, and other entities.
// It is used to organize code into logical groups and to prevent name collisions.
namespace Math {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
}

int main() {
    // We don't need to use std::cout, std::endl if we do:
    
    // Doing this brings all names from the std namespace into the current scope.
    // using namespace std;
    
    // Doing this brings only the name cout and endl from the std namespace into the current scope not all names.
    using namespace std::cout;
    using namespace std::endl;

    // :: = scope resolution operator
    int result = Math::add(2, 3); // Accessing add() from Math namespace
    cout << "Result: " << result << endl;
    
    // using namespace = allows us to use the identifiers without the scope resolution operator
    using namespace Math;
    int result2 = subtract(2, 3); // Accessing subtract() from Math namespace
    cout << "Result2: " << result2 << endl;
    
    return 0;
}