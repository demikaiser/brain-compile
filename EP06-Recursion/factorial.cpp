#include <iostream>

using namespace std;

int factorial(int number) {
    if (number < 2) return 1;
    return number * factorial(number - 1);
}

int main() {

    int number = factorial(5);

    cout << number << endl;

    return 0;
}


