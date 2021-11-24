#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A, B, C" << endl;
	int A, B, C, d;
	cin >> A >> B >> C;
	d = B;
	B = A;
	A = C;
	C = d;
	cout << A << " " << B << " " << C << endl;
}
