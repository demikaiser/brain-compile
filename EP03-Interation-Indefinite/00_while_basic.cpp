#include <iostream>

using namespace std;

int main() {

    bool condition1 = true;
    bool condition2 = true;
    bool condition3 = true;

    while (condition1 || condition2 || condition3) {

        condition1 = !condition1;
        condition2 = condition1 || condition2;
        cout << condition1 << " " << condition2 << endl;

    }

    return 0;
}


