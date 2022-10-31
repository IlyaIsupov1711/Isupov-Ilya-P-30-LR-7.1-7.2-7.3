#include <iostream>

int main() 
{
    int n, m;
    std::cin >> n >> m;
    int** array;
    array = new int* [n];
    for (int i = 0; i < n; i++)
        array[i] = new int[n];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int o = 0; o < m; o++)
            {
                if (array[i][o] > array[i][o + 1])
                {
                    int tmp = array[i][o];
                    array[i][o] = array[i][o + 1];
                    array[i][o + 1] = tmp;
                }

            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}