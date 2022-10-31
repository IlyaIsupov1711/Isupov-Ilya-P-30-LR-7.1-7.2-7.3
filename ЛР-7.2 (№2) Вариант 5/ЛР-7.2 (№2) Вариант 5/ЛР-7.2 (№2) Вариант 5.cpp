#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int** array;
	int n;
	std::cout << "Введите число="; std::cin >> n;
	array = new int* [n];
	for (int i = 0; i < n; i++)
		array[i] = new int[n];
	for (int j = 0; j < n; ++j) 
	{
		array[0][j++] = 1;
		array[1][j] = 1;
		array[2][j] = 0;
		array[3][j] = 1;
		array[4][j] = 0;
		for (int i = -1; i < n; i++)
		{
			array[0][i++] = 0;
			array[1][i] = 0;
			array[2][i] = 1;
			array[3][i] = 0;
			array[4][i] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
}