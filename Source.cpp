#include "fraction.h"

int main() {
	setlocale(LC_ALL, "RUS");

	fraction Fraction1, Fraction2, num;

	Fraction1.setFraction(1, 2);
	Fraction2.setFraction(5, 3);

	cout << "��������:\n\t";

	num = Fraction1 + Fraction2;
	num.print();


	cout << "\n���������:\n\t";

	num = Fraction1 - Fraction2;
	num.print();

	cout << "\n�������:\n\t";

	num = Fraction1 / Fraction2;
	num.print();

	cout << "\n���������:\n\t";

	num = Fraction1 * Fraction2;
	num.print();

	return 0;
}
