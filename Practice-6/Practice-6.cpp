// Practice-6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	int number, temp = 0;
	cout << "Введите число от 0 до 20 ->";
	cin >> number;
	while (temp <= number) {
		if (temp % 2 == 0) {
			cout << temp << " является четным." << endl;
			}
		temp++;
	}
	*/

	/*
	int n = 5;
	while (n > 0) {
		cout << n << " ";
		if (n == 3) {
			n--;
			continue;
		} 
		cout << "next ";
		n--;
	}
	cout << n;
	*/

	int number,temp = 0;
	cout << "Введите число ->";
	cin >> number;
	while (temp <= number) {
		cout << temp << endl;
		temp++;
	}
}
