#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите число" << endl;
	int A, intmod;
	cin >> A;
	intmod = A % 100;
	cout << intmod * 10 + A / 100 << endl;
}