#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int num;
	cin >> num;
	map<int, int> m;
	int array[num];
	int array2[num];
	int cnt = 0;
	for(int i = 0; i < num; i++) {
		cin >> array[i];
		array2[i] = array[i];
	}
	sort(array, array+num);
	for(int i = 0; i < num; i++){
		if(m.find(array[i]) == m.end()) {
			m[array[i]] = cnt;
			cnt++;
		}
	}
	for(int i = 0; i < num; i++) cout << m[array2[i]] << " ";
	cout << '\n';
	return 0;
}