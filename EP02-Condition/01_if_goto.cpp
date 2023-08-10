#include <iostream>

using namespace std;

int main() {
    int number = 4;
    if (0 < number && number < 5) {
        cout << "1" << endl;
    } else if (3 < number && number < 8) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }

    bool condition1 = true;
    if (true) {
        cout << "1" << endl;

        JUMP:
        cout << "2" << endl;

        if (!condition1) {
            cout << "3" << endl;
        }

        if (condition1) {
            cout << "4" << endl;
            condition1 = !condition1;
            goto JUMP;
        }
    }
    return 0;
}


