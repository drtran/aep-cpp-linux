/*
 * Calculator.h
 *
 *  Created on: Jul 10, 2015
 *      Author: ktran
 */

#ifndef SRC_TEST_CALCULATOR_H_
#define SRC_TEST_CALCULATOR_H_



struct Calculator {
	void add(const int& newValue);

	Calculator() {
	}

	Calculator(int& startValue) : val(startValue) {
	}

	int value() const;

private:
	int val = 0;
};


#endif /* SRC_TEST_CALCULATOR_H_ */
