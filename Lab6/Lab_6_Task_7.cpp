#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A" << endl;
	int A, b, c;
	cin >> A;
	b = pow(A, 2) * pow(A, 2) * pow(A, 2) * pow(A, 2);
	c = b * pow(A, 3) * pow(A, 4);
	cout << c << endl;
}
