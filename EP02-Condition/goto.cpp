#include <iostream>

using namespace std;

int main() {
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


