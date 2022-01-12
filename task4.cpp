#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void f(const double&, double&);

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        f(x, result);
        printf("f: %.4f\n", result);
    }
    return 0;
}


void f(const double& x, double& result) {
    result = (sin((M_PI/2.0)+3.0*x))/(1-sin(3.0*x-M_PI));
}
