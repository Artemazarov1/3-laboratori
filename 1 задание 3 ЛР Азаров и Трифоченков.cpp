#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	double sajenvmetr = 2.1366;
	double arshin_to_meter = 0.7112;
	double duimvsm = 2.5;
	double fotvmetr = 0.3048;
	double draxmivgrammi = 3.7325;
	double ynciivgrammi = 29.86;
	double fyntivkg = 0.40951;
	double zalotnikvgr = 4.2657;
	double duimivmm = 25.3995;

	cout << "Перевод старинных русских мер длины, торгового и аптекарского веса: " << endl;
	for (int i = 1; i <= 10; i++) {
		double arshin = i;
		double meter = arshin * arshin_to_meter;

		cout << i << " аршин = " << meter << " метров" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double sajen = i;
		double kilogram = sajen * sajenvmetr;

		cout << i << " сажень = " << kilogram << " метр" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double dyim = i;
		double kilogram = dyim * duimvsm;

		cout << i << " дюймы = " << kilogram << "см" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double fyt = i;
		double kilogram = fyt * fotvmetr;

		cout << i << " фут = " << fixed << kilogram << "метр" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double drahma = i;
		double kilogram = drahma * draxmivgrammi;

		cout << i << " драхма = " << "граммы" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double yncia = i;
		double kilogram = yncia * ynciivgrammi;

		cout << i << " унция = " << kilogram << "граммы" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double fynt = i;
		double kilogram = fynt * fyntivkg;

		cout << i << " фунт = " << kilogram << "кг" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double zalotnik = i;
		double kilogram = zalotnik * zalotnikvgr;

		cout << i << " залотник = " << kilogram << "гр" << endl;
	}
	cout << endl << " " << endl;
	for (int i = 1; i <= 10; i++) {
		double dyimm = i;
		double kilogram = dyimm * duimivmm;

		cout << i << " дюймы = " << kilogram << "мм" << endl;
	}
	return 0;
}