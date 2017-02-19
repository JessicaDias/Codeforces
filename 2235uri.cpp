#include <iostream>

using namespace std;

int main() {
    int a, b ,c, r = 0;

    cin >> a >> b >> c;

    if (a == b || a == c || c == b){
        r = 1;
    } else {
        if (a+b == c || a+c == b || c+b == a){
            r = 1;
        }
    }
    if (r == 1){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}