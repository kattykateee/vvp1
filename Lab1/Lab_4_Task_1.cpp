﻿#include <iostream> // подключение библиотеки
using namespace std; // объявление пространства имён

int a, b, S, P; // обьъявление переменных типа int

int main() // главная функция
{
	cin >> a >> b; // ввод значений переменных
	S = a * b; // вычисление площади S = a*b
	P = 2 * (a + b); // вычисление периметра P = 2*(a+b)
	cout << "S" << "=" << S << endl; // вывод результата
	cout << "P" << "=" << P; // вывод результата
}
