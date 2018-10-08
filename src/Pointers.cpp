#include <iostream>
using namespace std;

// Every variable is a memory location, which has its address defined.
// That address can be accessed using the ampersand(&) operator (also called the
// address - of operator), which denotes an address in memory.

// A pointer is a variable, with the address of another variable as its value.

int main() {
    int score = 5;
    cout << &score << endl;

    // The asterisk sign is used to declare a pointer

    int *ip;     // pointer to an integer
    double *dp;  // pointer to a double
    float *fp;   // pointer to a float
    char *ch;    // pointer to a character

    // The asterisk can be in three different places when declaring a pointer
    // variable: int *ptr = int *ptr = int *ptr =

    int *scorePtr;
    scorePtr = &score;

    cout << scorePtr << endl;
    cout << "This should print the score: " << *scorePtr << endl;

    // Address-of operator (&): returns the memory address of its operand.
    // Contents-of (or dereference) operator (*): returns the value of the
    // variable located at the address specified by its operand.

    int var = 590;
    int *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */
}