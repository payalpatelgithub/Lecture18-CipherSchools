#include <iostream>

// Function declaration
void swap(int &x, int &y);

int main() {
    int a = 10, b = 20;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}

// Function definition
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

