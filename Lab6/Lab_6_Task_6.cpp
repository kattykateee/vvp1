#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A" << endl;
	int A, b;
	cin >> A;
	b = pow(A, 2) * pow(A, 2) * pow(A, 2) * pow(A, 2);
	cout << b << endl;
}
