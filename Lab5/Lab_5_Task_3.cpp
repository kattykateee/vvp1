#include <iostream>
using namespace std;



int main()
{	
	setlocale(0, "");
	cout << "Введите A, B, C" << endl;
	int A, B, C, pr;
	cin >> A >> B >> C;
	pr = (C - A) * (B - C);
	cout << pr << endl;
}
