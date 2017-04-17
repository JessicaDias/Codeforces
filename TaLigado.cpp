#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	int n, m;
	int t, a, b, r = 1;
	vector<int> vizinhos[100010];
	
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> t >> a >> b;
		r = 1;
		if (t == 1){
			vizinhos[a].push_back(b);
			vizinhos[b].push_back(a);
		} else {
			for (int j = 0; j < vizinhos[a].size(); j++){			
				if (vizinhos[a][j] == b){
					r = 0;
					j = vizinhos[a].size();
				}
			}
		if (r == 0) cout << "1" << endl;
		else cout << "0" << endl;		
		}
	}
	return 0;
}
