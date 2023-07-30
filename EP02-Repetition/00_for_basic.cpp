#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 20; i = 2 * i + 1) {
        cout << "i: " << i << endl;
    }

    return 0;
}
