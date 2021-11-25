<<<<<<< HEAD
﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A1, B1, C1, A2, B2, C2" << endl;
	int A1, A2, B1, B2, C1, C2, a, b, c;
	cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
	a = A1 * B2 - A2 * B1;
	b = C1 * B2 - C2 * B1;
	c = A1 * C2 - A2 * C1;
	cout << b / a << " " << c / a << endl;
}
=======
﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите A1, B1, C1, A2, B2, C2" << endl;
	int A1, A2, B1, B2, C1, C2, a, b, c;
	cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
	a = A1 * B2 - A2 * B1;
	b = C1 * B2 - C2 * B1;
	c = A1 * C2 - A2 * C1;
	cout << b / a << " " << c / a << endl;
}
>>>>>>> ebd3ae2c21165a5a60de75b724a394ec4d2e149b
