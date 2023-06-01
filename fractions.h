
#pragma once
#include<iostream>
using namespace std;

class Fraction
{
public:
	Fraction();
	Fraction(int numer, int denom);
	
	void show_fraction();
	void input_fraction();
	friend Fraction operator+(Fraction& fraction, Fraction& fraction2) {
		Fraction result;
		result.numerator = fraction.numerator * fraction2.denominator + fraction2.numerator * fraction.denominator;
		result.denominator = fraction2.denominator * fraction.denominator;
		return result;
	}
	friend Fraction operator+(Fraction& fraction,int numb) {
		Fraction result;
		result.numerator = fraction.numerator  + (numb * fraction.denominator);
		result.denominator = fraction.denominator;
		return result;
	}
	friend Fraction operator+( int numb,Fraction& fraction) {
		Fraction result;
		result.numerator = fraction.numerator + (numb * fraction.denominator);
		result.denominator = fraction.denominator;
		return result;
	}
	friend Fraction operator-(Fraction& fraction, Fraction& fraction2) {
		Fraction result;
		result.numerator = fraction.numerator * fraction2.denominator - fraction2.numerator * fraction.denominator;
		result.denominator = fraction2.denominator * fraction.denominator;
		return result;
	}

	friend Fraction operator-(Fraction& fraction, int numb) {
		Fraction result;
		result.numerator = fraction.numerator - (numb * fraction.denominator);
		result.denominator = fraction.denominator;
		return result;
	}

	friend Fraction operator-(int numb,Fraction& fraction) {
		Fraction result;
		result.numerator = (numb * fraction.denominator)-fraction.numerator;
		result.denominator = fraction.denominator;
		return result;
	}

	friend Fraction operator*(Fraction& fraction, Fraction& fraction2) {
		Fraction result;
			result.numerator = fraction2.numerator * fraction.numerator;
			result.denominator = fraction2.denominator * fraction.denominator;
			return result;
	}

	friend Fraction operator*(Fraction& fraction, int numb) {
		Fraction result;
		result.numerator = numb * fraction.numerator;
		result.denominator = fraction.denominator;
		return result;
	}


	friend Fraction operator*( int numb,Fraction& fraction) {
		Fraction result;
		result.numerator = numb * fraction.numerator;
		result.denominator = fraction.denominator;
		return result;
	}

	friend Fraction operator/(Fraction& fraction, Fraction& fraction2) {
		Fraction result;
		result.numerator = fraction2.denominator * fraction.numerator;
		result.denominator = fraction2.numerator * fraction.denominator;
		return result;
	}

	friend Fraction operator/(Fraction& fraction, int numb) {
		Fraction result;
		result.numerator = fraction.numerator;
		result.denominator = numb * fraction.denominator;
		return result;
	}

	friend Fraction operator/(int numb,Fraction& fraction) {
		Fraction result;
		result.numerator =numb *fraction.denominator;
		result.denominator =   fraction.numerator;
		return result;
	}

	Fraction operator--() {
		numerator = numerator - denominator;
		return *this;
	}
	Fraction operator++() {
		numerator = numerator + denominator;
		return *this;
	}

	 Fraction operator++(int) {
		Fraction fraction(numerator, denominator);
		++(*this);
		return fraction;
	}

	 Fraction operator--(int) {
		 Fraction fraction(numerator, denominator);
		 --(*this);
		 return fraction;
	 }

	int val(int a, int b);
	void reduce();
private:
	int numerator;
	int denominator;
};
