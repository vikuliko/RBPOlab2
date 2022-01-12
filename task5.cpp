#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main() {
	while (true) {
		cout << "Enter x: ";
		cin >> x;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}

void f() {
	result = (sin((M_PI/2.0)+3.0*x))/(1-sin(3.0*x-M_PI));
}