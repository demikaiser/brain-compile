#include <iostream>
#include <string>

using namespace std;

void sayHelloTo(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {

    string name = "Jake";

    sayHelloTo(name);

    return 0;
}



