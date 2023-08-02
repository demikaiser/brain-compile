#include <iostream>

using namespace std;

int main() {

    int number1 = 1;
    int number2 = 2;

    int numbers[] = {1, 2, 3};

    cout << "Address of number1: " << &number1 << endl;
    cout << "Address of number2: " << &number2 << endl;

    cout << "Address of number[0]: " << numbers + 0 << endl;
    cout << "Address of number[1]: " << numbers + 1 << endl;
    cout << "Address of number[2]: " << numbers + 2 << endl;


    return 0;
}


