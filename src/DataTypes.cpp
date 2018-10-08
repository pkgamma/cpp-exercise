#include <iostream>

// gotta include <string> to use string, unlike in Java,
// this time you actally have to work for it.

// BUT BRO! The <string> library is included in the <iostream> library, so you
// don't need to include <string> separately, if you already use <iostream>.

// ! C++ is case-sensitive (better comment plugin made this red.)

using namespace std;

// signed: A signed integer can hold both negative and positive numbers.
// unsigned: An unsigned integer can hold only positive values.
// short: Half of the default size.
// long: Twice the default size.

int main() {
    unsigned long int a = 42;  // positive num only

    float b = 4.20;  // decimal points ok

    string name = "Philip Kuo";

    bool tf = true;

    if (tf) {
        cout << "The bool value is true." << endl;
    }

    cout << name << endl;
    cout << b << endl;
    cout << a << endl;

    // ARRAYS!

    int arr[] = {0, 1, 2, 3, 4};

    cout << arr[3] << endl;
}
