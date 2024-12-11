#pragma once
#include <iostream>

using namespace std;

class fraction
{
private:
	int numerator, denominator;

public:
	void setFraction(int num, int deno);

	fraction() :numerator{ 1 }, denominator{ 1 } {}

	fraction(fraction& obj) {
		numerator = obj.numerator;
		denominator = obj.denominator;
	}

	void print();

	fraction operator+(const fraction& obj);
	fraction operator-(const fraction& obj);
	fraction operator*(const fraction& obj);
	fraction operator/(const fraction& obj);
};

