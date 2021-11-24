#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A, B" << endl;
	int A, B;
	cin >> A >> B;
	B = B ^ A;
	A = A ^ B;
	B = B ^ A;
	cout << A << " " << B << endl;
}
