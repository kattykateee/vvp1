#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите x" << endl;
	int x, y;
	cin >> x;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << y << endl;
}
