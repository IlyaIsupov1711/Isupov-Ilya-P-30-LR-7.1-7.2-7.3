#include <iostream>

void Process1(int** M, int* Sum, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        Sum[i] = 0;
        for (size_t j = 0; j < m; ++j) {
            Sum[i] += M[i][j];
        }
    }
}

void Process2(int** M, int* Sum, size_t n, size_t m) {
    for (size_t i = 0; i < m; ++i) {
        Sum[i] = 0;
        for (size_t j = 0; j < n; ++j) {
            Sum[i] += M[j][i];
        }
    }
}

bool Process3(int** M, size_t n, size_t m) {
    int* sum1 = new int[n];
    int* sum2 = new int[m];
    Process1(M, sum1, n, m);
    Process2(M, sum2, n, m);
    bool ok = true;
    for (size_t i = 1; i < n; ++i)
        if (sum1[i] != sum1[0])ok = false;
    for (size_t j = 0; j < m; ++j)
        if (sum2[j] != sum1[0])ok = false;
    delete[] sum1;
    delete[] sum2;
    return ok;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    size_t n, m;
    std::cout << "Введите количество строк матрицы: ";
    std::cin >> n;
    std::cout << "Количество столбцов матрицы тоже равно " << n << '\n';
    m = n;
    int** array;
    array = new int* [n];
    for (int i = 0; i < n; i++)
        array[i] = new int[n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            array[i][j] = rand() % 100;
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
    if (Process3(array, n, m))
        std::cout << "Магический\n";
    else
        std::cout << "НЕ Магический\n";
    return 0;
}