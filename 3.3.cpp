// Lab_03_3.cpp
// Новосад Захарій
// Лабораторна робота № 3.3
// Розгалуження, задане графічно.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;  
    double R1; 
    double R2; 
    double y; 

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    if (x <= -R1)
        y = -x - 2;
    else if (x > -R1 && x <= 0)
        y = -R1 + sqrt(R1 * R1 - x * x);
    else if (x > 0 && x <= R2)
        y = R2 - sqrt(R2 * R2 - x * x);
    else if (x > R2 && x <= 4)
        y = -R1;
    else
        y = 0.5 * x - 3;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    cin.get();
    return 0;
}