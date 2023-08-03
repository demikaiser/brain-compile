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

    return 0;
}

