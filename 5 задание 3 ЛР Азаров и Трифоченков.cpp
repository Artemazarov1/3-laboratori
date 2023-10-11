#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int visota;
	cout << "введите высоту треугольника: ";
	cin >> visota;

	for (int i = 1; i <= visota; i++) 
	{
		for (int a = 1; a <= visota - i; a++) 
		{
			cout << " ";
		}

		for (int b = 1; b <= 2 * i - 1; b++) 
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}