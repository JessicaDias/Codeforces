#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int p, n, alt, vet[100], dif, venceu;

    cin >> p >> n;

    for (int i = 0; i < n; i++){
        cin >> alt;
        vet[i] = alt;
    }


    for (int i = n-1; i > 0; i--){
        dif = abs(vet[i] - vet[i-1]);
        if (dif <= p && dif <= 5){
            venceu = 1;
        } else {
            venceu = 0;
            break;
        }
    }

    if (venceu == 1)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;

    return 0;
}