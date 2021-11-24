#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите r" << endl;
	double a, r;
	cin >> r;
	a = r * 180 / 3.14;
	cout << a << endl;
}
