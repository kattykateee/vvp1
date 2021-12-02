#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A и B, где A > B" << endl;
	int A, B, l;
	cin >> A >> B;
	l = A % B;
	cout << "Незанятая часть отрезка A = " << A << " равна " << l << endl;
}