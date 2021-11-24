#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите x" << endl;
	int x, y;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << y << endl;
}
