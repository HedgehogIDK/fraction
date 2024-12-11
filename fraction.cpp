#include "fraction.h"

void fraction::setFraction(int num, int deno) {
	if (num != 0) {
		numerator = num;
	}

	if (deno != 0) {
		denominator = deno;
	}
}

fraction fraction::operator+(const fraction& obj) {
	fraction buffer;

	buffer.numerator = numerator * obj.denominator + obj.numerator * denominator;
	buffer.denominator = denominator * obj.denominator;

	return *this;
}

fraction fraction::operator-(const fraction& obj) {
	fraction buffer;

	buffer.numerator = numerator * obj.denominator - obj.numerator * denominator;
	buffer.denominator = denominator * obj.denominator;

	return buffer;
}

fraction fraction::operator*(const fraction& obj) {
	fraction buffer;

	buffer.numerator = numerator * obj.numerator;
	buffer.denominator = denominator * obj.denominator;

	return buffer;
}

fraction fraction::operator/(const fraction& obj) {
	fraction buffer;

	buffer.numerator = numerator * obj.denominator;
	buffer.denominator = denominator * obj.numerator;

	return buffer;
}

void fraction::print() {
	cout << "\n" << numerator << "/" << denominator << "\n";
}


