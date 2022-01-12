#include "klevtsova.h"

namespace klevtsova {
	double x, result;

	void f() {
		result = (sin((M_PI/2.0)+3.0*x))/(1-sin(3.0*x-M_PI));
	}
}