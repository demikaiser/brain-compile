#include <iostream>

using namespace std;

int main() {

    int numbers[] = {1, 3, 5, 7, 9};
    numbers[2] = 11;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}

