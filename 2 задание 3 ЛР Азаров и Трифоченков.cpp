#include <iostream>
#include <cmath>
using namespace std;

double summa(double rubli, int let)
{
	double procent = 0.03;
	double raschet = rubli * pow(1 + procent, let);
	return raschet;
}

int main()
{
	setlocale(0, "");
	double rubli;
	int let;

	cout << "введите начальную сумму вклада в рублях: ";
	cin >> rubli;

	cout << "введите количество лет: ";
	cin >> let;

	double itogsum = summa(rubli, let);
	cout << "итоговая сумма вклада составит: " << itogsum << " рублей" << endl;

	return 0;
}