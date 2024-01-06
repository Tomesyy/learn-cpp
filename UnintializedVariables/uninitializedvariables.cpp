#include <iostream>

int main() {
    int x;

    std::cout << "The value of x is " << x << std::endl;

    return 0;
}

/*
    ====================
    NOTES
    ====================
    
    Since we didn't assign any value to x (x is uninitialized), it is going to be assigned to a random unused memory address,
    hence printing different random number in the console on each execution.
*/
