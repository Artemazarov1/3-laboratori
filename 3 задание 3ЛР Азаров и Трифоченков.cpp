#include <iostream>
using namespace std;

int main()
{
	long long zadacha = 1;
	const int primer = 10;
	for (int i = 1; 1 <= primer; i++)
		zadacha *= (i * (i + 1)) / 2;

	cout << zadacha << endl;


	return 0;
}