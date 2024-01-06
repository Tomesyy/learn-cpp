#include <iostream>

int main() {
    std::cout << "Enter a number: \n";
    int x;
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;


    return 0;
}

/*
    ====================
    NOTES
    ====================

    The std::cout is a buffered i.e the requests to it are stored somewhere in the memory, before it is being flushed.

    Flushed means that all the data collected in the buffer is transferred to its destination (in the case, the console).

    Best practice is to use '\n' over 'std::endl' when printing text to the console.
        - std::endl is quite inefficient because it actually does two jobs: it moves the cursor to the next line,
        and it flushes the buffer.
        - \n only moves the cursor to the next line and doesn't make any request to flush the buffer.
*/
