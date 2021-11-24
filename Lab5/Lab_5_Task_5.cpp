#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите x1, x2, x3, y1, y2, y3" << endl;
	double x1, x2, x3, y1, y2, y3, S, P, st1, st2, st3;
	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
	st1 = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	st2 = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	st3 = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));
	P = st1 + st2 + st3;
	S = sqrt(P / 2 * (P / 2 - st1) * (P / 2 - st2) * (P / 2 - st3));
	cout << P << " " << S << endl;
}
