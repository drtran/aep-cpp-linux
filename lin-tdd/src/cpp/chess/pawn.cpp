#include "pawn.h"
using namespace std;

string pawn::getColor() const {
	return colorValue;
}

void pawn::setColor(string newColor) {
	colorValue = newColor;
}
