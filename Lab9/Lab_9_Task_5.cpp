#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите год" << endl;
	int A;
	cin >> A;
	if (A % 100 == 0) {
		cout << A << " год относится к " << A / 100 << " столетию";
	}
	else {
		cout << A << " год относится к " << A / 100 + 1 << " столетию";
	}
}