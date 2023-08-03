#include <iostream>

using namespace std;

int main() {

    bool a = true;
    bool b = true;
    bool c = true;

    while (a || b || c) {
        a = !a;
        b = a || b;
        cout << a << " " << b << endl;
    }

    return 0;
}


