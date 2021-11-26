#include <iostream>
#include <chrono> 
using namespace std;
using namespace chrono;

int main() {

	setlocale(LC_ALL, "rus");
	system_clock::time_point start;
	system_clock::time_point end;
	duration<double> sec;


	cout << "Задание 1 - Создание массива :" << endl;
	//mass- неотсортированный массив,mas-сортированный массив
	int mas[100] = {};
	int mass[100] = {};

	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		mas[i] = rand() % 199 - 99;
		mass[i] = mas[i];
	}

	cout << endl << "Массив c числами oт -99 до 99: ";
	for (int i = 0; i < 100; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;

	cout << endl<<"Задание 2 - Сортировка массива :" << endl;
	int S;
	//S-вид сортировки 
	cout << "Выберите способ сортировки:" << endl << "1.Пузырьковая сортировка" << endl << "2.Сортировка вставками" << endl;
	cin >> S;
	switch (S) {
	case(1):
		start = system_clock::now();
		for (int i = 0; i < 100; i++) {
			for (int j = 1; j < 100 - 1; j++) {
				if (mas[j - 1] > mas[j]) {
					swap(mas[j - 1], mas[j]);
				}
			}
		}
		end = system_clock::now();
		break;
	case(2):
        int n;
	start = system_clock::now();
	for (int i = 1; i < 100; i++)
	{
		n = mas[i];
		//n-элемент отсортированного массива 
		for (int j = i - 1; j >= 0; j--)
		{
			if (n < mas[j])
			{
				swap(mas[j], mas[j + 1]);
			}

		}
	}
	end = system_clock::now();
			break;
	}
	sec = end - start;
	cout <<endl<<"Время, требуемое на сортировку: "<<sec.count()<< endl;

	cout <<"Отсортированный массив:" << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << mas[i] << " ";

	}
	cout << endl;
		cout << endl << "Задание 3 - MAX и MIN :" << endl;
            int min = 100, max = -100; 
			start = system_clock::now();
			mas[0];
			end = system_clock::now();
			sec = end - start;
			cout <<endl<< "Время поиска MIN в отсортиванном массиве: " << sec.count() << endl;

			start = system_clock::now();
			mas[99];
			end = system_clock::now();
			sec = end - start;
			cout << "Время поиска MAX  в отсортиванном массиве: " << sec.count() << endl;

			start = system_clock::now();
			for (int i = 0; i < 100; i++)
			{
				if (mass[i] > max)
				{
					max =mass[i];
				}
			}
			end = system_clock::now();
			sec = end - start;
			cout << "Время поиска MAX в неотсортиванном массиве: " << sec.count() << endl;

			start = system_clock::now();
			for (int i = 0; i < 100; i++)
			{
				if (mass[i] < min)
				{
					min = mass[i];
				}
			}
			end = system_clock::now();
			sec = end - start;
			cout << "Время поиска MIN  в неотсортиванном массиве: " << sec.count() << endl;
		
		cout << endl;

		cout << endl << "Задание 4 - Среднее значение :" << endl;
		int A, K = 0;
		//A-индексы элементов = ср.знач. , K-колическо таких элементов  
		A = (mas[99]+mas[0]) / 2;
		cout <<endl<< "Среднее значение: " << A << endl << "Индексы: "; 
		for (int i = 0; i < 100; i++)
		{
			if (mas[i] == A)
			{
				cout << i << " ";
				K += 1;
			}
			if (mas[i] > A) 
			{
				break;
			}
		}
		cout << endl << "Количество элементов ср.знач.: " << K <<endl;

		cout << endl;

		int M = 1;
		while (M)
		{
			cout << endl << "Задание 5- Количество элементов, меньше вводимого :" << endl;
			int a, amount1;
			cout << endl << "Введите число: ";
			cin >> a;
			for (int i = 0; i < 100; i++)
			{
				if (mas[i] > a)
				{
					amount1 = i;
					break;
				}
			}
			cout << "Количество элементов, меньше вводимого : " << amount1 << endl;

			cout << endl;
			
			cout << "Введите 0, если хотите закончить, или другое число для повтора задания." << endl;
			cin >> M;
			if (M == 0) { M = 0; }
			else { M = 1; }
		}

		M = 1;
		while (M)
		{
			cout << endl << "Задание 6 - Количество элементов, больше вводимого :" << endl;
			int b, amount2;
			cout << endl << "Введите число: ";
			cin >> b;
			for (int i = 0; i < 100; i++)
			{
				if (mas[i] > b)
				{
					amount2 = i;
					break;
				}
			}
			cout << "Количество элементов, больше вводимого : " << 100 - amount2 << endl;

			cout << endl;

			cout << "Введите 0, если хотите закончить, или другое число для повтора задания." << endl;
			cin >> M;
			if (M == 0) { M = 0; }
			else { M = 1; }
		}

		M = 1;
		while (M) {
			cout << endl << "Задание 8 - Замена элементов :" << endl;
			int number1, number2, change, masss[100];
			//masss-отсортированный массив,дублирующий mas
			for (int i = 0; i < 100; i++)
			{
				mass[i] = mas[i];
			}
			cout << endl << "Введите число 1:";
			cin >> number1;
			cout << "Введите число 2:";
			cin >> number2;
			start = system_clock::now();
			change = mas[number1];
			mas[number1] = mas[number2];
			mas[number2] = change;
			end = system_clock::now();
			sec = end - start;
			cout << "Время замены:" << sec.count() << endl;

			cout << "Введите 0, если хотите закончить, или другое число для повтора задания." << endl;
			cin >> M;
			if (M == 0) { M = 0; }
			else { M = 1; }
		}

	return 0;
}
