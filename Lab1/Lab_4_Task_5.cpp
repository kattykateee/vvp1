#include <iostream> // подключение библиотеки
using namespace std; // объявление пространтсва имён

int a, b, summa, razn, pr, chastn; // объявление перменных типа int

int main() // главная функция
{
	cin >> a >> b; // ввод значений переменных
	summa = abs(a) - abs(b); // вычисление суммы модулей
	razn = abs(a) - abs(b); // вычисление разности модулей
	pr = abs(a) * abs(b); // вычисление произведения модулей
	chastn = abs(a) / abs(b); // вычисление частного моделй
	cout << summa << " " << razn << " " << pr << " " << chastn; // вывод результата
}