#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, n, a[10][10], k = 0, count = 0, sum = 0;

	cout << "кол-во строк, столбцов квадратной матрицы: ";
	cin >> n;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "элемент " << i + 1 << " строки " << j + 1 << " столбца: ";
			cin >> a[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j] << '\t';
		}
		cout << "\n";
	}
	for (i = 0; i < n; i++) {
		k++;
		for (j = 0 + k; j < n; j++) {
			if (i != j && a[i][j] > 0) {
				sum += a[i][j];
				count += 1;
			}
		}
	}

	cout << "количество положительных чисел выше главной диагонали: " << count << '\n'
		<< "сумма положительных чисел выше главной диагонали: " << sum;

	return 0;
}