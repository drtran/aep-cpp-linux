/*
 * pawn.h
 *
 *  Created on: Jul 11, 2015
 *      Author: ktran
 */

#ifndef SRC_TEST_CHESS_PAWN_H_
#define SRC_TEST_CHESS_PAWN_H_
#include "iostream"

using namespace std;

class pawn {
public:
	pawn() {
		colorValue = "invalid";
	}

	string getColor() const;
	void setColor(string colorValue);

	pawn (string startColor) {
		colorValue = startColor;
	}


private:
	string colorValue;
};


#endif /* SRC_TEST_CHESS_PAWN_H_ */
