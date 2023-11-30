#include <iostream>
using namespace std;

int main() {
    // Writing numbers from 1 to 10
    cout << "Numbers 1 to 10: ";
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Reversing numbers from 1 to 10
    cout << "Reversed numbers: ";
    for (int i = 10; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
