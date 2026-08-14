#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, img;

public:
    void input() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }

    void show() {
        cout << real;
        if (img >= 0)
            cout << "+" << img << "i";
        else
            cout << img << "i";
        cout << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    c3.add(c1, c2);

    cout << "Sum = ";
    c3.show();

    return 0;
}