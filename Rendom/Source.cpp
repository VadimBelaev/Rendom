//������������ ������ ������� �++
#include <iostream>
#include <cstdlib> //���������� ���������� ��������� �������������� 
//������� �� ��������� ����� �������� rand, srand
#include <ctime> //����������, ���������� ������� ������� ������ �� ��������
//��������: time
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	/*srand(time(0));// time(0) ���������� ���������� ������, ��������� � 1 ������ 1970 ����
	cout << rand() << "\n"; // rand - ��� �������, ������������ "���������" ����� �� 0 �� 32767
	cout << rand() << "\n";*/

	//�������� �� 0 �� n ��������������
	/*srand(time(0));
	n = 7;
	cout << rand() % n << "\n";*/

	//�������� �� a �� b ��������������
	/*srand(time(0));
	int a = 5, b = 12;
	cout << rand() % (b - a) + a << "\n";*/

	//������� "������ ��������� ����� [1...10]"
	/*const int size = 20;
	int arr[size];
	srand(time(0));
	cout << "������:\n";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (10 + 1 - 1) + 1;
		cout << arr[i] << " , ";
	}
	cout << "\b\b.\n\n";*/

	return 0;
}