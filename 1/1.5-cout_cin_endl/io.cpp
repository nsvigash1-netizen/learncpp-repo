#include <iostream>

int main() {

    /*
    Analogy:
    console is always in left
    in cout, the text moves from left to console
    in cin, the input moves from keyboard to variable
    */
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';

    return 0;

    std:: cout << "This line will never be executed." << std::endl;
}