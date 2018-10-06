// hello.cpp: Philip Kuo
// Description: c++ program, following what Google is telling me to do

#include <iostream>

// nice editior.

using std::cout;
using std::endl;
using std::cin;

int main() {

    const int MAX_LOOPS = 5;

    for (int i = 0; i < MAX_LOOPS; i++) {
        cout << "Hello, CS126! Getting started in C++, this is exciting!" << endl;
    }

    cout << "Editing in VSCode. Editing in Xcode now! Nope, in CLion now! Should I try Vim?" << endl;

    int input_var = 0;

    do {
        cout << "Enter a number, or enter -1 to quit: ";

        if (!(cin >> input_var)) {
            cout << "NOT NUMBER!" << endl;
            break;
        }

        if (input_var != -1) {
            cout << "You entered: " << input_var << endl;
        }

    } while (input_var != -1);

    cout << "Bye bye." << endl;

    return 0;
}