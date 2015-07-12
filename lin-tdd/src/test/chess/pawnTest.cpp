#include "cute.h"
#include "pawnTest.h"

#include "../../cpp/chess/pawn.h"

using namespace std;

string expectedColor;
pawn aPawn;

void setUp() {
	cout << "setUp ... \n";
}

void canBeCreated() {
	setUp();
	ASSERTM("Success!", true);
}

void shouldBeWhite() {
	setUp();
	expectedColor = "white";
	aPawn.setColor (expectedColor);
	ASSERT_EQUAL(expectedColor, aPawn.getColor());
}

void shouldBeBlack() {
	setUp();
	expectedColor = "black";
	aPawn.setColor (expectedColor);
	ASSERT_EQUAL(expectedColor, aPawn.getColor());
}

cute::suite make_suite_pawnTest(){
	cute::suite s;
	s.push_back(CUTE(canBeCreated));
	s.push_back(CUTE(shouldBeWhite));
	s.push_back(CUTE(shouldBeBlack));
	return s;
}



