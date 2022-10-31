#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "RUS");
	int array[16];
	array[0] = 1;
	array[1] = 1;
	for (int i = 3; i < 16; i++)
	{
		array[i] = rand() % 20-20;
		std::cout << array[i] << std::endl;
	}
	for (int i = 0;i < 16;++i)
	{
		if (array[i] == array[i+1])
		{
			std::cout << "Точка номер: " << i << " и точка номер: " << i+1 << " могут быть вершинами треугольника." << std::endl;
		}
	}
}