#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число" << endl;
	int num, intmod;
	cin >> num;
	intmod = num % 10;
	num = num / 10;
	cout << intmod * 10 + num;
}