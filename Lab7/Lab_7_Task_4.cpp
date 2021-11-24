#include <iostream>

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
