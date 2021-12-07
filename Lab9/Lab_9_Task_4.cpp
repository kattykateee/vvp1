#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите значение сторон прямоугольника" << endl;
	int A, B, C, S1, S2, q;
	cin >> A >> B;
	cout << "Введите значение стороны квадрата" << endl;
	cin >> C;
	S1 = A * B;
	cout << "s прямоугольника = " << S1 << endl;
	S2 = C * C;
	cout << "s квадрата = " << S2 << endl;
	q = S1 / S2;
	cout << "в прямоугольнике площадью " << S1 << " размещается " << q << " квадратов площадью " << S2 << endl;
	cout << "оставшаяся часть = " << S1 - S2 * q << endl;
}