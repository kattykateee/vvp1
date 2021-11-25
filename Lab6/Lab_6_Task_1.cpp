<<<<<<< HEAD
﻿#include <iostream>
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
=======
﻿#include <iostream>
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
>>>>>>> ebd3ae2c21165a5a60de75b724a394ec4d2e149b
