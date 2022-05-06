#include "Header.h"

int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");
	int arr[20];
	for (int i = 0; i < 20; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	
	cout << endl;
	funk(arr, 20, proverka);
}