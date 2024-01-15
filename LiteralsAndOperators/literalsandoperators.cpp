#include <iostream>

int main() {
    std::cout << 5 << '\n'; //print the value of a literal

    int x = 5;
    std::cout << x << '\n'; // print the value of a variable

    return 0;
}

/*
    ====================
    NOTES
    ====================

    Unlike variables whose value can be changed through initialization and assignment respectively,
    the value of a literal is fixed.

    Literals are called Constants.

    In the case of a literal the value can be printed directly. In the case of a variable, the value 
    must be fetched from the memory address of the variable.

    A literal's value is placed directly into the executable, and the executable itself can't be changed
    after it is created.


*/
