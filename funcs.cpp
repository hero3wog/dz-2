#include "Header.h"

void print(int* ar, int size) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl;
}
void invers(int* ar, int size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = ar[size - i - 1];
		ar[i] = ar[size - i - 1];
		ar[size - i - 1] = temp;
	}
	print(ar, size);
}
void vozr(int* ar, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ar[j] > ar[j + 1]) {
				temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}
	print(ar, size);
}
void ubiv(int* ar, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (ar[j] < ar[j + 1]) {
				temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}
	print(ar, size);
}
void proverka(int* ar, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += ar[i];

	if (sum == ar[0])
		invers(ar, size);
	else if (sum > ar[0])
		vozr(ar, size);
	else
		ubiv(ar, size);

}
void funk(int* ar, int size, void(*bufFunc)(int*, int)) {
	return bufFunc(ar, size);
}