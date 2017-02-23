#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, cont;

    while(cin >> n && n != 0) {

        int m[n][n];

        for(int k = 0 ; k < n ; ++k) {
            cont = 0;
            for (int i = k , j = 0; i >= 0; --i, ++j)
            {
                if(k % 2 == 0) {
                    if(i >= (k/2)) {
                        cont++;
                    } else {
                        cont--;
                    }
                } else {
                    if(i > j)
                        cont++;
                    if(j > i+1)
                        cont--;
                }

                m[i][j] = cont;
            }
        }

        for(int k = n-1; k > 0; --k)
        {
            cont = 0;
            for(int i = n-1, j = k; j < n; --i, ++j)
            {
                if(i >= j)
                    cont++;
                if(j > i+1)
                    cont--;

                m[i][j] = cont;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if(j<n-1){
                    cout << right << setw(3) << setfill(' ') << m[i][j] << " ";
                }else{
                    cout << right << setw(3) << setfill(' ') << m[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}