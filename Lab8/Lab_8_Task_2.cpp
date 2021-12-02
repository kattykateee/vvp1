#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A и B, где A > B" << endl;
	double A, B, quantity;
	cin >> A >> B;
	quantity = A / B;
	cout << "На отрезке длины " << A << " размещено " << quantity << " отрезков длины " << B << endl;
}