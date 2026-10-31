#include <iostream>

#define MY_NAME "Alex"
#define PRINT_JOE


int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

// #ifdef PRINT_BOB
//     std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
// #endif

//if not defined
#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;
}