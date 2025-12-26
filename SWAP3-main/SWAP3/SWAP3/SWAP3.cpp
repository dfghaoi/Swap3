#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int a, b, c, temp;
    cout << "A= "; cin >> a;
    cout << "B= "; cin >> b;
    cout << "C= "; cin >> c;
    cout << "A= " << a << ", B= " << b << ", C= " << c << endl;
    temp = a;
    a = c;
    c = b;
    b = temp;
    cout << "A= " << a << ", B= " << b << ", C= " << c;
}