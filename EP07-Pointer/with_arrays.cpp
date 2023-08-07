#include <iostream>

using namespace std;

void increment(int *pointer) {
    (*pointer)++;
}

int main() {

    int number = 1;

    cout << "Before: " << number << endl;

    increment(&number);

    cout << "After: " << number << endl;

    return 0;
}








