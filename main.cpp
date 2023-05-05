#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, x1, x2;

    cout << endl << "Enter a value A: ";
    cin >> a;
    cout << endl << "Enter a value B: ";
    cin >> b;
    cout << endl << "Enter a value C: ";
    cin >> c;

    cout << endl << a << "x^2 + " << b << "x + " << c << " = 0";

    int d = dis(3, 5, 6);
    // Нет корней
    if (d < 0){
        cout << endl << "no roots";
    }
    else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << endl << "Discrimenant raven = "<< d;
        cout << endl << "x1 = " << x1 << ", x2 = " << x2;
    }

    return 0;
}
