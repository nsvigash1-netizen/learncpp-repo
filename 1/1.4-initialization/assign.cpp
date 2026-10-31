#include <iostream>
int main() {
    int width;
    width = 5;
    std::cout << width << std::endl;
    
    int height {10}; // direct-list initialization (preffered)
    std::cout << height << std::endl;

    int x {}; // value initialization
    std::cout << "Enter number for x: ";
    std::cin >> x; 
    std::cout << "Value of x is: " << x;
    
    return 0;

}