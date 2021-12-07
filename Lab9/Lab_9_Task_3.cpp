#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите K, N" << endl;
	int K, N, weekday;
	cin >> K >> N;
	weekday = K % 7 + N;
	if (weekday == 0)
		weekday = 7;
	if (weekday > 7)
		weekday = weekday - 7;
	cout << weekday;
}