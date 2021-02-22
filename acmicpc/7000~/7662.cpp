#include <iostream>
#include <map>
using namespace std; 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test, k;
	cin >> test;
	for(int i = 0; i < test; i++){
		cin >> k;
		map<int, int> m;
		for(int j = 0; j < k; j++){
			char order;
			int input;
			cin >> order;
			cin >> input;
			if(order == 'I') {
				if(m.find(input) == m.end()) m[input] = 1;
				else m[input]++;
			}
			else if(order == 'D'){
				if(m.empty()) continue;
				else if(input == 1) {
					if(m[(--m.end())->first] == 1) m.erase((--m.end())->first);
					else m[(--m.end())->first]--;
				}
				else{
					if(m[m.begin()->first] == 1 ) m.erase(m.begin()->first);
					else m[m.begin()->first]--;
				}
			}
		}
		if(m.empty()) cout << "EMPTY" << '\n';
		else cout << (--m.end())->first << " " << m.begin()->first << '\n';
	}
	return 0;
}