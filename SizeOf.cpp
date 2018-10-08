#include <iostream>
using namespace std;

// The sizeof operator can be used to get a variable or data type's size, in
// bytes.

// Output values may vary, according to the computer and compiler used.

int main() {
    cout << sizeof(int) << endl;

    char p = 'a';

    cout << sizeof(p) << endl;

    //! divide the total number of bytes in the array by the number of bytes in
    //! a single element to learn how many elements you have in the array.

    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]) << endl;

    // Outputs 100
}