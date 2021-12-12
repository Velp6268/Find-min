#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int i, a[3], min = INT_MAX;
    cout << "Введите 3 числа: " << endl;
    for (i = 0; i <= 2; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i <= 2; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }

    }
    cout << "Минимальное число: " << min << endl;

}