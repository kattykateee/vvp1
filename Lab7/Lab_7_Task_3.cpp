#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите X, A, Y, y, x" << endl;
	int X, A, Y, y, x;
	cin >> X >> A >> Y;
	cout << X << " кг конфет стоит " << A << " рублей" << endl;
	y = A / X;
	cout << "1 кг конфет стоит " << y << endl;
	x = Y * y;
	cout << Y << " кг конфет стоит " << x << " рублей" << endl;
}
