#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A, B, C" << endl;
	int A, B, C, t;
	cin >> A >> B >> C;
	t = A;
	A = C;
	C = B;
	B = t;
	cout << A << " " << B << " " << C << endl;
}
