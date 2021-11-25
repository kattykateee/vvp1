<<<<<<< HEAD
﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите V1, V2, S1, T" << endl;
	int V1, V2, S1, S2, T;
	cin >> V1 >> V2 >> S1 >> T;
	cout << V1 << " км/ч - скорость первого автомобиля, " << V2 << " км/ч - скорость второго автомобиля, " << S1 << " км - начальное расстояние между автомобилями" << endl;
	S2 = (V1 * T) + (V2 * T) + S1;
	cout << S2 << " км - расстояние между автомобилями через " << T << " часов." << endl;
}
=======
﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите V1, V2, S1, T" << endl;
	int V1, V2, S1, S2, T;
	cin >> V1 >> V2 >> S1 >> T;
	cout << V1 << " км/ч - скорость первого автомобиля, " << V2 << " км/ч - скорость второго автомобиля, " << S1 << " км - начальное расстояние между автомобилями" << endl;
	S2 = (V1 * T) + (V2 * T) + S1;
	cout << S2 << " км - расстояние между автомобилями через " << T << " часов." << endl;
}
>>>>>>> ebd3ae2c21165a5a60de75b724a394ec4d2e149b
