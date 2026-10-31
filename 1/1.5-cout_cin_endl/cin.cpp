#include <iostream>
int main() {
    // std::cout << "Hi!" << std::endl << "How are You?" << std::endl;
    std::cout << "Hi!\nHow are You?\n";
    int x{}, y{};
    std::cout << "Enter x, y: ";
    std::cin >> x >> y;
    std::cout << "Value of x: " << x;
    std::cout << "\nValue of y: " << y << "\n";

    std::cout << "No. of bytes int can hold: " << sizeof(int) << std::endl;
    return 0;
}