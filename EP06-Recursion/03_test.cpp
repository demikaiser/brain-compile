#include <iostream>

using namespace std;

int fib(int number) {
    if (number <= 2) return 1;
    return fib(number - 1) + fib(number - 2);
}

int main() {

    int number = fib(7);

    cout << number << endl;

    return 0;
}


