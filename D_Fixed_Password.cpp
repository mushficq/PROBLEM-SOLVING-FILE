#include <iostream>
using namespace std;

int main() {
    int number;

    for (;;) {
        cin >> number;
        if (number == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}