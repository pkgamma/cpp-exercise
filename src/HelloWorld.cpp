// hello.cpp: Philip Kuo
// Description: c++ program, following what Google is telling me to do
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    const int MAX_NUM_OF_LINES = 5;

    for (int i = 0; i < MAX_NUM_OF_LINES; i++) {
        cout << "Hello, CS126! Getting started in C++, this is exciting!"
             << endl;
    }

    cout << "Editing in VSCode. Editing in Xcode now! Nope, in CLion now! "
            "Should I try Vim?"
         << endl;

    int inputNumber = 0;

    do {
        cout << "Enter a number, or enter -1 to quit: ";

        if (!(cin >> inputNumber)) {
            cout << "NOT NUMBER!" << endl;
            cin.clear();
            cin.ignore('\n');
        }

        if (inputNumber != -1) {
            cout << "You entered: " << inputNumber << endl;
        }

    } while (inputNumber != -1);

    cout << "Bye bye." << endl;

    return 0;
}