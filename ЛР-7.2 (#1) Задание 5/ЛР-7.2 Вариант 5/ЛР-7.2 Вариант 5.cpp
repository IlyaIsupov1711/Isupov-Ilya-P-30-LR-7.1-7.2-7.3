#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "RUS");
	const int a = 8;
	const int b = 8;
	int array[a][b];
	/*
	* 	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			array[i][j] = 0;
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
	*/
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			array[0][j] = 1;
			array[7][j] = 1;
			array[i][0] = 1;
			array[i][7] = 1;
			array[1][j-1] = 0;
			array[2][j-1] = 0;
			array[3][j - 1] = 0;
			array[4][j - 1] = 0;
			array[5][j - 1] = 0;
			array[6][j - 1] = 0;
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
}