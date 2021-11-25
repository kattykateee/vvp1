<<<<<<< HEAD
﻿#include <iostream>

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
=======
﻿#include <iostream>

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
>>>>>>> ebd3ae2c21165a5a60de75b724a394ec4d2e149b
