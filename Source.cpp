#include <iostream>
using namespace std;
int main() {
	/*for (int i = 10; i < 100; i++) {
		if (i % 5 == 0) {
			cout << i << endl;
		}
	}*/
	/*4*/
	/*int k;
	cin >> k;
	for (int i = 1; i <= 10; i++) {
		cout << k << "*" << i << "=" << i * k << endl;
	}*/
	/*int a, b, k;
	cin >> a >> b >> k;
	for (int i = a; i <= b; i= i+k) {
		cout << i << endl;
	}*/
	//опписание массива целых чисел
	/*const int size = 5;
	int mas[size];
	for (int i = 0; i, i < size; i = i + 1) {
		cin >> mas[i];
	}
	for (int i = 0; i, i < size; i = i + 1) {
		cout << mas[i]<< ' ';
	}
	cout << endl;*/
	/*Series1◦
. Даны десять вещественных чисел. Найти их сумму*/
	/*const int size = 10;
	double mas[size];
	for (int i = 0; i < size; i = i + 1) {
		cin >> mas[i];
	}
	double sum = 0;
	for (int i = 0; i < size; i = i + 1) {
		sum = sum + mas[i];
	}
	cout << 'sum=' << sum << endl;*/
	/*2. Даны десять вещественных чисел. Найти их произведение.*/
	/*const int size = 10;
	double mas[size];
	for (int i = 0; i < size; i = i + 1) {
		cin >> mas[i];
	}
	double sum = 1;
	for (int i = 0; i < size; i = i + 1) {
		sum = sum * mas[i];
	}
	cout << 'sum=' << sum << endl;*/
	const int size = 10;
	double mas[size];
	for (int i = 0; i < size; i = i + 1) {
		cin >> mas[i];
	}
	double sum = 0;
	for (int i = 0; i < size; i = i + 1) {
		sum = sum + mas[i];
	}
	cout << 'sum=' << sum/size << endl;
	return 0;
}