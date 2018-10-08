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
}