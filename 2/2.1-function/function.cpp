#include <iostream>

// void doPrint(int count) {
//     std::cout << "In call " << count << " of doPrint()\n";
// }

// Function prototype (or Function Declaration)
void doPrint(int count);
int main() {
    std::cout << "Starting main()\n";
    doPrint(1);
    doPrint(2);
    std::cout << "Ending main()\n";

    return 0;
}

// Forward Declaration
void doPrint(int count) {
    std::cout << "In call " << count << " of doPrint()\n";
}