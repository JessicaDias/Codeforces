#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, lado;

    while(cin >> a && a != 0)
    {
        cin >> b >> c;
        lado = a * b * (100.0/c);
        lado = (int) sqrt(lado);
        cout << lado << endl;

    }

    return 0;
}