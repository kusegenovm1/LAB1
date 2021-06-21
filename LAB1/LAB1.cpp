#include <iostream>
#include <string>
using namespace std;

const int N = 10;          //1111
const int a = 3, b = 3;    //33333

void func1() {

	int mas[N];
	cout << "введите массив: " << endl; // заполнение массива
	for (int i = 0; i < N; i++)
		cin >> mas[i];

	for (int i = 0; i < N; i++) // преобразование массива, т.е. замена четных чисел на "0"
	{
		if (mas[i] % 2 == 0)
			mas[i] = 0;
	}
	cout << "преобразованный массив: "; //вывод преобразованного массива
	for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
	cout << endl;

}
void func2() {
	char symbol;
	string s;
	cout << "введите символ(НА АНГЛ. РАСКЛАДКЕ)" << endl;
	cin >> symbol;
	if (isalpha(symbol)) // проверка на ввод буквы
		cout << "введена буква" << endl;
	else (cout << "введена не буква" << endl);
	do {
		cout << "Введите строку" << endl; //ввод строки с проверкой
	} while (!getline(cin, s));
	cout << "строка введена" << endl;

	for (int i = 0; i < s[i] != '\0'; i++) {
		if (s[i] == symbol) {
			cout << "Символ " << symbol << " стоит на " << i + 1 << " месте"; break; // вывод номера введенного символа
		}
	}
	cout << endl;
	//cout << "Символ " << symbol << " стоит на " << s.find(symbol) + 1 << " месте";  //тоже рабочий вариант проверки номера введенного символа
}
void func3() {
	int mas[a][b];
	int opred;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "Введите значения массива:"; // заполнение массива
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	opred = (mas[0][0] * mas[1][1] * mas[2][2]) + (mas[2][0] * mas[0][1] * mas[1][2]) + (mas[1][0] * mas[2][1] * mas[0][2]) - (mas[2][0] * mas[1][1] * mas[0][2]) - (mas[0][0] * mas[2][1] * mas[1][2]) - (mas[1][0] * mas[0][1] * mas[2][2]);
	cout << "определитель = " << opred << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1:" << endl;
	func1();
	cout << "Задание 2:" << endl;
	func2();
	cout << "Задание 3:" << endl;
	func3();
}
