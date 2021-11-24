#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A, B" << endl;
	double A, B, x;
	cin >> A >> B;
	x = B / A;
	cout << x << endl;
}
