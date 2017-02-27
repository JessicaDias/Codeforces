#include <iostream>

using namespace std;

int main(){

    int s, t, f, resultado;

    cin >> s >> t >> f;

    //Transforma em minutos
    if (s == 0){
        s = 24;
    }

    s = s * 60;
    t = t * 60;
    f = f * 60;

    resultado = (s + t + f)/60;

    if (resultado >= 24){
        resultado = resultado - 24;
    }

    cout << resultado << endl;

    return 0;
}