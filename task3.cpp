#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double);

int main() {
    double x;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
    return 0;
}

double f(double x) {
    return (sin((M_PI/2.0)+3.0*x))/(1-sin(3.0*x-M_PI));
}
