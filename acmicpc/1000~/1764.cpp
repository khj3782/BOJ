#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k;
	int cnt{0};
	cin >> n >> k;
	map<string, int> m;
	for(int i = 0; i < n+k; i++){
		string s;
		cin >> s;
		if(m.find(s) == m.end()) m[s] = 1;
		else {
			m[s]++;
			cnt++;
		}
	}
	cout << cnt << '\n';
	for(auto i = m.begin(); i != m.end(); i++){
		if(i->second == 2) cout << i->first << '\n';
	}
	return 0;
}