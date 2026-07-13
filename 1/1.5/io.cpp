#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';

    return 0;

    std:: cout << "This line will never be executed." << std::endl;
}