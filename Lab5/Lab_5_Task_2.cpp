#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A, B, C" << endl;
	int A, B, C, AC, BC;
	cin >> A >> B >> C;
	AC = C - A;
	BC = C - B;
	cout << AC << " " << BC << " " << AC + BC << endl;
}
