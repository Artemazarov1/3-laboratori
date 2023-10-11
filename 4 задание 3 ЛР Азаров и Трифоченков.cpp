#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	int number;
	int colichestvochisel = 0;
	int sum = 0;
	double sredneearifm = 0.0;

	cout << "введите числа (для завершения введите 0): " << endl;
	while (true) {
		std::cin >> number;

		if (number == 0) {
			break;
		}

		colichestvochisel++;
		sum += number;
	}

	if (colichestvochisel > 0) {
		sredneearifm = sum / colichestvochisel;
	}

	cout << "количество чисел: " << colichestvochisel << endl;
	cout << "сумма чисел: " << sum << endl;
	cout << "среднее арифметическое: " << sredneearifm << endl;

	return 0;
}