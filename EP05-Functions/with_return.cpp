#include <iostream>

using namespace std;

int addCrazy(int a, int b) {
    a = a + 1;
    b = b + 2;
    return a + b;
}

int main() {

    int number1 = 1;
    int number2 = 2;

    cout << addCrazy(number1, number2) << endl;

    return 0;
}



