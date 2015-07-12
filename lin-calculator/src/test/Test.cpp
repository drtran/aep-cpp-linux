#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "../cpp/Calculator.h"

/**
 * NOTES:
 */

void testInitialValue() {
	Calculator calc;
	ASSERT_EQUAL(0, calc.value());
}

void testSpecifiedStartValue() {
	int startValue = 23;
	Calculator calc(startValue);
	ASSERT_EQUAL(startValue, calc.value());
}

void testAddValue() {
	int startValue = 23;
	Calculator calc(startValue);
	calc.add(24);
	ASSERT_EQUAL(47, calc.value());

}


void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	//TODO add your test here



	s.push_back(CUTE(testInitialValue));
	s.push_back(CUTE(testSpecifiedStartValue));
	s.push_back(CUTE(testAddValue));

	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
    return 0;
}



