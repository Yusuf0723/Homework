

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cout << "Enter price:";
    cin >> a;
    cout << "Enter quantity:";
    cin >> f;
    cout << "Enter procent:";
    cin >> b;
    c = a * f;
    d = c * (b / 100);
    e = c - d;
    cout << e;
}

