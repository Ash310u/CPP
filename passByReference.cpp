#include <iostream>

void swap(int &a, int &b);

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    return 0;
}

// Comparing with C. We pass address or the vars to the function as swap(&a, &b) and the function declare the vars as pointers swap(int *a, int *b).
// In C++, we pass the vars to the function as swap(a, b) and the function declare the vars as references swap(int &a, int &b).
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}