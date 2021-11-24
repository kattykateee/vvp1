#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите x1, x2, y1, y2" << endl;
	double x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	cout << "s = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
}