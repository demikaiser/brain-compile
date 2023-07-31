#include <iostream>

using namespace std;

int fibonacci(int nth) {

    if (nth < 3) { return 1; }

    int prevFibonacci = fibonacci(nth - 1);
    int prevPrevFibonacci = fibonacci(nth - 2);

    return prevFibonacci + prevPrevFibonacci;
}

int main() {



    return 0;
}


