#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int N = 31;
	int arr[N];
	int sum = 0;
	int temp = 20;
	int count = 0;

	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 30 - 25;
		cout << "Температура " << i + 1 << " числа " << arr[i] << "\n\n";
		sum += arr[i];
	}
	for (int i = 0; i < temp; i++) {
		
	}
}