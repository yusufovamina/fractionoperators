#include<iostream>
#include"fractions.h"
using namespace std;
int main() {
	Fraction fr1(8,5);
	Fraction fr2(2,5);
	Fraction fr3 =2 / fr2 ;

	fr3.show_fraction();
}