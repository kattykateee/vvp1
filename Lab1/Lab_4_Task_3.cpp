﻿#incude <iostream> // подключение библиотеки
using namespace std; // объявление пространтсва имён

int a, b, sr_ar; // объявление перменных типа int

int main() // главная функция
{
	cin >> a >> b; // ввод значений переменных
	sr_ar = (a + b) / 2; // вычисление ср. арифм. знач. sr_ar = (a + b) / 2
	cout << sr_ar; // вывод результата
}