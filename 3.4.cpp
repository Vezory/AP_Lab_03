// Lab_03_4.cpp
// Новосад Захарій
// Лабораторна робота № 3.4
// Розгалуження: попадання точки в заштриховану область.
// Варіант 16
#include <iostream>

using namespace std;

int main()
{
    double x; 
    double y; 

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

   
    if ((x >= 0 && y >= 0 && y <= x && y <= -x * x + 2) ||
        (x <= 0 && y <= 0 && y >= x && y <= -x * x + 2))
    {
        cout << "yess" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cin.get();
    cin.get();
    return 0;
}