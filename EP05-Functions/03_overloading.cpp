#include <iostream>

using namespace std;

int addNumbers(int a, int b) {
    cout << "addNumbers(int a, int b)" << endl;
    return a + b;
}

int addNumbers(int a, int b, int c) {
    cout << "addNumbers(int a, int b, int c)" << endl;
    return a + b;
}

int addNumbers(int a, double b) {
    cout << "addNumbers(int a, double b)" << endl;
    return a + b;
}

/* YOU CAN NOT DO THIS! ERROR!!! */
// double addNumbers(int a, int b) {}

int main() {
    addNumbers(1, 2);
    addNumbers(1, 2, 3);
    addNumbers(1, 2.0);
    return 0;
}



