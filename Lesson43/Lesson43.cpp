#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mySwap(int n, int m) {
	int tmp = n;
	n = m;
	m = tmp;
}
void pSwap(int *pn, int *pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
template <typename T> void showArr(T arr[], int L);
void fillArr(int arr[], int L, int min, int max);
// Задача 1.
void sumArr(int arr[], int L, int* pn);
// Задача 2.
void compare(int* pn, int* pm);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1.
	cout << "Задача 1.\nИзначальный массив:\n";
	int z1[10];
	fillArr(z1, 10, 1, 21);
	showArr(z1, 10);
	sumArr(z1, 10, &n);
	cout << "Сумма всех элементов массива = " << n << "\n\n";

	// Задача .
	cout << "Задача 1.\nВведите два числа:\n";
	cin >> n >> m;
	compare(&n, &m);
	cout << "n = " << n << ", m " << m << endl;

	/*cout << "Введите 2 числа: ";
	cin >> n >> m;
	pSwap(&n, &m);
	cout << "n = " << n << ", m = " << m << endl;*/
	/*int n = 10;
	int m = n;
	n = 15;
	//cout << &n << endl;
	int* pn = &n;
	cout << pn << endl;
	cout << &n << endl;
	cout << *pn << endl;
	n = 20;
	cout << *pn << endl;
	*pn = 11;
	cout << n << endl;
	int* pm;
	pm = &m;
	cout << "--------\n";
	cout << pm << " - " << *pm << endl;
	*pm = 100;
	cout << m << endl;*/
	/*int a = 5, b = 6;
	int* pa = &a;
	cout << pa << " - " << *pa << endl;
	pa = &b;
	cout << pa << " - " << *pa << endl;
	*pa = 10;
	int* pb = &b;

	cout << pa  << endl;
	cout << pb << endl;
	cout << &b << endl;*/
	/*int x = 5;
	int* px = &x;
	cout << px << endl;
	px++;
	cout << px << endl;*/
	/*int arr[5] = {1, 2, 3, 4, 5};
	cout << arr << endl;
	//cout << arr[0] << endl;
	//cout << *(arr + 2) << endl;
	for (int i =0; i < 5; i++)
		cout << *(arr + i) << " ";
	int* pa3 = &arr[2];
	cout << *(pa3 - 2) << endl;*/

	return 0;
}
// Задача 2.
void compare(int* pn, int* pm) {
	if (*pn > *pm) {
		*pn *= *pn;
		*pm *= *pm;
	}
	else {
		*pn = 0;
		*pm = 0;
	}
}
// Задача 1.
void sumArr(int arr[], int L, int* pn) {
	*pn = 0;
	for (int i = 0; i < L; i++)
		*pn += *(arr + i);
}

// Изначальный массив
template <typename T> void showArr(T arr[], int L) {
	cout << "[";
	for (int i = 0; i < L; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";

}
// Заполнение массива.
void fillArr(int arr[], int L, int min = 0, int max = 10) {
	srand(time(NULL));
	for (int i = 0; i < L; i++)
		*(arr + i) = rand() % (max - min) + min;
}