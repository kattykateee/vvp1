#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите a" << endl;
	int a;
	double r;
	cin >> a;
	r = a * 3.14 / 180;
	cout << r << endl;
}