#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int add(int a, int b = 10) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Square: " << square(5) << endl;
    cout << "Addition: " << add(5) << endl;
    cout << "Multiply (int): " << multiply(3, 4) << endl;
    cout << "Multiply (double): " << multiply(2.5, 3.5) << endl;

    return 0;
}