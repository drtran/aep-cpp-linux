#include "cute.h"
#include "bankAccountTest.h"

void shouldAllowDeposit() {
	ASSERTM("start writing tests", false);	
}

void shouldAllowWithdraw() {
	ASSERTM("start writing tests", false);
}

void shouldAllowWithdrawWithPenalty() {
	ASSERTM("start writing tests", false);
}

void shouldCalculateInterest() {
	ASSERTM("start writing tests", false);
}

void shouldCalculateInterestRate() {
	ASSERTM("start writing tests", false);
}


cute::suite make_suite_bankAccountTest(){
	cute::suite s;
	s.push_back(CUTE(shouldAllowDeposit));
	s.push_back(CUTE(shouldAllowWithdraw));
	s.push_back(CUTE(shouldAllowWithdrawWithPenalty));
	s.push_back(CUTE(shouldCalculateInterest));
	s.push_back(CUTE(shouldCalculateInterestRate));
	return s;
}



