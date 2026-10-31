#include <iostream>
// Obtain 3 int from user and print them
int main() {
    std::cout << "Enter 3 numbers: ";
    int x{}, y{}, z{};
    std::cin >> x >> y >> z;
    std::cout << "You entered: " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}