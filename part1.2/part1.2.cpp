// part1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	
    setlocale(0, "");
    const int N = 6;
    int sum=0,K, a;
    int randomDigits[N] = {};
    cout << "Введите желаемый диапазон чисел от 0 до  \n";
    cin >> a;
    cout << "Ваши случайные числа из вашего диапазона следующие : \n";
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        randomDigits[i] = rand() % a; // рандомные числа от 0 до 50
        cout << randomDigits[i] << endl;
    }

    cout << "Введите любое число от 0 до " << a << "\n" ;
    
    cin >> K;

    for (int i = 0; i < N; i++)
    {
        if (randomDigits[i] < K)
        {
            sum += randomDigits[i];
        }
       

    }

    cout << "Сумма чисел, которые меньше заданного вами числа = " << sum;
}

