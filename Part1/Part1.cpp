// Part1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int N = 6;
    int min, max;
    int randomDigits[N] = {};
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        randomDigits[i] = rand(); 
        cout << randomDigits[i] << endl;
    }


    min = randomDigits[0];

    max = randomDigits[0];


    for (int i = 0; i < N; i++)
    {
        if (randomDigits[i] > max)
        {
            max = randomDigits[i];
        }
        if (randomDigits[i] < min)
        {
            min = randomDigits[i];
        }

    }
    cout << "min:" << min << ", max:" << max;






    return 0;


}

