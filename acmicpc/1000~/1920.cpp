#include <iostream>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n;
	map<int, int> m;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		m[temp] = 1;
	}
	cin >> k;
	for(int i = 0; i < k; i++){
		int temp;
		cin >> temp;
		if(m.find(temp) != m.end()) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}