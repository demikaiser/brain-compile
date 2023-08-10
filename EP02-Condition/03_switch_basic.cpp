#include <iostream>

using namespace std;

int main() {
    int number = 3;
    switch (number) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
        BACK:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
        case 4:
            cout << "4" << endl;
            goto BACK;
        default:
            cout << "5" << endl;
    }
    return 0;
}
