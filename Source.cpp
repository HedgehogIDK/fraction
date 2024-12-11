#include "fraction.h"

int main() {
	setlocale(LC_ALL, "RUS");

	fraction Fraction1, Fraction2, num;

	Fraction1.setFraction(1, 2);
	Fraction2.setFraction(5, 3);

	cout << "Сложение:\n\t";

	num = Fraction1 + Fraction2;
	num.print();


	cout << "\nВычитание:\n\t";

	num = Fraction1 - Fraction2;
	num.print();

	cout << "\nДеление:\n\t";

	num = Fraction1 / Fraction2;
	num.print();

	cout << "\nУмножение:\n\t";

	num = Fraction1 * Fraction2;
	num.print();

	return 0;
}
