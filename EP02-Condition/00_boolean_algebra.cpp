#include <iostream>

using namespace std;
/* <Truth Table>
X  Y  X&&Y  X||Y  !X  !Y
F  F  F     F     T   T 
F  T  F     T     T   F 
T  F  F     T     F   T 
T  T  T     T     F   F 
*/
int main() {

    bool a = true;
    bool b = false;
    bool c = true;

    cout << (a && b || !c || !b && a) << endl;

    cout << ((!a && b) || (a && !b)) << endl;

    cout << ((a && (b || !c)) && !a) << endl;

    return 0;
}
