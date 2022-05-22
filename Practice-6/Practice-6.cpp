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

	/*
	int number,temp = 0;
	cout << "Введите число ->";
	cin >> number;
	while (temp <= number) {
		cout << temp++ << endl;
		temp++;
	}
	*/

	/*
	int n1, n2;
	cin >> n1 >> n2;
	int min= min(n1, n2), max = max(n1, n2);
	int summ = 0;
	while (min <= max) {
		summ += min;
		min++;
	}
	cout << summ;
	*/

	/*
	int number, result = 0;
	do {
		cin >> number;
		result += number;
	} while (number != 0 && number != 7);

	cout << result;
	*/

	/*

	int n1, n2;
	cout << "Введите первую переменную - >";
	cin >> n1;
	cout << "Введите вторую переменную - >";
	cin >> n2;
	int min = min(n1, n2), max = max(n1, n2);
	cout << "Выводим четные:";
	while (min <= max) {
		if (min % 2 == 0) cout << min << " ";
		min++;
	}
	min = min(n1, n2);
	cout << "Выводим нечетные:";
	while (min <= max) {
		if (min % 2 != 0) cout << min << " ";
		min++;
	}
	min = min(n1, n2);
	cout << "Выводим кратные 7:";
		while (min <= max) {
		if (min % 7 == 0) cout << min << " ";
		min++;
	}
	*/

	/*
	int number;

	while (1) {
		cin >> number;
		if (number == 0) break;
	}
	
	//ver2
	do {
		cin >> number;
	} while (number);
	*/


	//int number;
	//cin >> number;
	//for (int i = 0; i <= number; i++) { cout << i << " "; }

	/*
	int n1, n2,result =0;
	cin >> n1;
	cin >> n2;

	for (int i = min(n1, n2); i <= max(n1, n2); i++) {
		result += i;
	}
	cout << result;
	*/

	/*
	int a, summa=0;
	cin >> a;
	for (; a != 0 && a != 7;summa +=a) {
		cin >> a;
	}
	cout << summa;
	*/

	int n1, n2;
	cout << "Введите первое число ->";
	cin >> n1;
	cout << "Введите второе число ->";
	cin >> n2;
	
	cout << "Выводим четные:";
	for (int i = min(n1, n2), j = max(n1,n2); i <= j; i++) {
		if (i % 2 == 0) cout << i << " ";
	}
	cout << "Выводим нечетные:";
	for (int i = min(n1, n2), j = max(n1, n2); i <= j; i++) {
		if (i % 2 != 0) cout << i << " ";
	}
	cout << "Выводим кратные 7:";
	for (int i = min(n1, n2), j = max(n1, n2); i <= j; i++) {
		if (i % 7 == 0) cout << i << " ";
	}

}
