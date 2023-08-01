#include <iostream>

using namespace std;

int main() {

    int i = 0;

    while (i < 3) {
        cout << "i in while loop: " << i << endl;
        i++;
    }

    for (int i = 0; i < 3; i++) {

        cout << "i in for loop: " << i << endl;
    }

    return 0;
}


