#include <iostream>

int main() {

    /*
    Analogy:
    Human is in the left, CPU is in the right
    CPU asks number from human (arrow from right to left)
    Human provides number to CPU (arrow from left to right)
    */
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';

    return 0;

    std:: cout << "This line will never be executed." << std::endl;
}