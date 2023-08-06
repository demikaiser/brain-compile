#include <iostream>

using namespace std;

void modifyArray(int *array) {
    array[2] = 11;
}

int main() {

    int numbers[] = {1, 3, 5, 7, 9};

    modifyArray(numbers);

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}

