#define _USE_MATH_DEFINES
#include "klevtsova.h"

using namespace std;

int main() {
    while (true) {
        cout << "Enter x: ";
        cin >> klevtsova::x;
        klevtsova::f();
        printf("f: %.4f\n", klevtsova::result);
    }
    return 0;
}