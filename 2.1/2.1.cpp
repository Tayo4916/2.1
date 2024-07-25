// 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double z;
    cout << "Прошло 234 дня.\n";
    z = 234 / 7;
    cout << "В 1-й неделе 7 дней.\n";
    cout << "Число полных недель за этот период: " << floor(z) << endl;
    _getch();
}