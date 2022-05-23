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

	/*

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
	*/
	
/*
int computerNumber=0, userNumber=0, numberOfCounts=0;
long long time_final, time_start, time_end;
cout << "Игра угадай число\n";
cout << "Загадано число в диапазоне от 1  до 500\n";
cout << "Предположите какое это число?\n";
srand(time(NULL));
computerNumber = rand()%500; // rand()%(Y-X) + X
time_start = time(NULL);
while (1) {
	cin >> userNumber;
	if (userNumber == computerNumber) {
		time_end = time(NULL);
		time_final = time_end - time_start;
		numberOfCounts++;
		cout << "Правильно!\n";
		cout << "Были использованы " << numberOfCounts << " попыток!";
		cout << "Вы затратили на отгадывание числа " << time_final << " секунд";
		break;
	}
	else if (userNumber == 0) {
		cout << "Вы сдались!";
		break;
	}
	else if (userNumber < computerNumber) {
		cout << "Загаданное число больше вашего!\n";
		numberOfCounts++;
	}
	else if (userNumber > computerNumber) {
		cout << "Загаданное число меньше вашего вашего!\n";
		numberOfCounts++;
	}
}*/

	/*
	int num_user, rand_num_computer, counter = 0;
	int time_final, time_star, time_end;
	srand(time(NULL));
	rand_num_computer = rand()% 500;
	do {
		counter++;
		cout << "Введите число: ";
		cin >> num_user;
		if (num_user > rand_num_computer) cout << "Загаданное число меньше\n";
		else if (num_user < rand_num_computer) cout << "Загаданное число больше\n";
	} while (num_user != rand_num_computer && num_user != 0);
	*/

double userSelect, temp;
char userAnswer;

while (1) {
	cout << "Программа-конвертер валют\n"
		<< "\tМеню:\n"
		<< "\t\t1. Узнать курс доллара\n"
		<< "\t\t2. Узнать курс евро\n"
		<< "\t\t3. Перевести рубли в доллары\n"
		<< "\t\t4. Перевести рубли в евро\n"
		<< "\t\t5. Перевести доллары в рубли\n"
		<< "\t\t6. Перевести евро в рубли\n"
		<< "\t\t0. Выход\n";
	cin >> userSelect;
	if (userSelect == 1) {
		cout << "Курс доллара 62 рубля.\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 2) {
		cout << "Курс евро 65 рублей.\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 3) {
		cout << "Перевести рубли в доллары, укажите какое количество рублей переводим в доллары?\n";
		cin >> temp;
		cout << "Вы получите " << temp / 62 << " долларов!\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 4) {
		cout << "Перевести рубли в евро, укажите какое количество рублей переводим в евро?\n";
		cin >> temp;
		cout << "Вы получите  " << temp / 65 << " евро!\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 5) {
		cout << "Какое количество долларов вы хотите продать?\n";
		cin >> temp;
		cout << "Вы получите за это " << temp * 62 << " рублей!\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 6) {
		cout << "Какое количество евро вы хотите продать?\n";
		cin >> temp;
		cout << "Вы получите за это " << temp * 65 << " рублей!\n";

		cout << "Продолжить? y/n\n";
		cin >> userAnswer;
		if (userAnswer == 'y') {
			system("CLS");
			continue;
		}
		else {
			break;
		}
	}
	else if (userSelect == 0) {
		break;
	}
}

}

