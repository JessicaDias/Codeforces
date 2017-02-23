#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a;
    int cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        if (a%2 == 0) cont2++;
        if (a%3 == 0) cont3++;
        if (a%4 == 0) cont4++;
        if (a%5 == 0) cont5++;
    }

    cout << cont2 << " Multiplo(s) de 2" << endl;
    cout << cont3 << " Multiplo(s) de 3" << endl;
    cout << cont4 << " Multiplo(s) de 4" << endl;
    cout << cont5 << " Multiplo(s) de 5" << endl;

    return 0;
}