//Персональный шаблон проекта С++
#include <iostream>
#include <cstdlib> //Библиотека содержащая множество дополнительных 
//функций из стандарта языка например rand, srand
#include <ctime> //библиотека, содержащая базовые функции работы со временем
//например: time
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*srand(time(0));// time(0) возвращает количество секунд, прошедшее с 1 января 1970 года
	cout << rand() << "\n"; // rand - это функция, возвращающая "случайное" число от 0 до 32767
	cout << rand() << "\n";*/

	//Диапазон от 0 до n невключительно
	/*srand(time(0));
	n = 7;
	cout << rand() % n << "\n";*/

	//Диапазон от a до b невключительно
	/*srand(time(0));
	int a = 5, b = 12;
	cout << rand() % (b - a) + a << "\n";*/

	//Задание "Массив случайных чисел [1...10]"
	/*const int size = 20;
	int arr[size];
	srand(time(0));
	cout << "Массив:\n";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (10 + 1 - 1) + 1;
		cout << arr[i] << " , ";
	}
	cout << "\b\b.\n\n";*/

	return 0;
}