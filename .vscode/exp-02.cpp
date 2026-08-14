#include <iostream>
using namespace std;

void byValue(int x) {
    x = x + 10;
}

void byReference(int &x) {
    x = x + 10;
}

void byAddress(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 10;

    cout << "Original: " << a << endl;

    byValue(a);
    cout << "After Call by Value: " << a << endl;

    byReference(a);
    cout << "After Call by Reference: " << a << endl;

    byAddress(&a);
    cout << "After Call by Address: " << a << endl;

    return 0;
}