#include <iostream>
using namespace std;

// Many times, you are not aware in advance how much memory you will need to
// store particular information in a defined variable and the size of required
// memory can be determined at run time.

// You can allocate memory at run time within the heap for the variable of a
// given type using the new operator, which returns the address of the space
// allocated.

int main() {

    //! The pointer p is stored in the stack as a local variable, and holds the
    //! heap's allocated address as its value. The value of 5 is stored at that
    //! address in the heap.
    int *p = new int;

    *p = 5;

    cout << *p << endl;

    delete p;  // free up the memory

    //! The delete operator frees up the memory allocated for the variable, but
    //! does not delete the pointer itself, as the pointer is stored on the
    //! stack.

    p = new int;  // reuse for a new address

    // It's a good practice to assign NULL to a pointer variable when you
    // declare it, in case you do not have exact address to be assigned. A
    // pointer assigned NULL is called a null pointer. For example: int *ptr =
    // NULL;

    int *k = NULL;    // Pointer initialized with null
    k = new int[20];  // Request memory
    delete[] k;       // Delete array pointed to by k

    //! delete de-allocates memory on the heap
    //! new allocates space dynamically on the heap
}
