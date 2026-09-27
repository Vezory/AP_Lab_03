// Lab_03_2.cpp
// Новосад Захарій
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double a;
    double b;
    double c; 
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Спосіб 1: розгалуження в скороченій формі
    if (x == 0 && b != 0)
        F = a * pow(x + c, 2) - b;

    if (x == 0 && b == 0)
        F = (x - a) / (-c);

    if (!(x == 0 && b != 0) && !(x == 0 && b == 0))
        F = a + x / c;

    cout << endl;
    cout << "1) F = " << F << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x == 0 && b != 0)
        F = a * pow(x + c, 2) - b;
    else
    {
        if (x == 0 && b == 0)
            F = (x - a) / (-c);
        else
            F = a + x / c;
    }

    cout << "2) F = " << F << endl;

    cin.get();
    cin.get();
    return 0;
}