#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите x1, x2, y1, y2" << endl;
	double x1, x2, y1, y2, P, S;
	cin >> x1 >> x2 >> y1 >> y2;
	P = 2 * (abs(x1 - x2) + abs(y1 - y2));
	S = abs(x1 - x2) * abs(y1 - y2);
	cout << P << " " << S << endl;
}
