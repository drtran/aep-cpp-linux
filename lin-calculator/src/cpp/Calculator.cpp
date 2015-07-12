#include "Calculator.h"

int Calculator::value() const {
	return val;
}

void Calculator::add(const int& newValue) {
	val += newValue;
}
