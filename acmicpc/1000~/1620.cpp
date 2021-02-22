#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	map<string, int> name;
	map<int, string> num;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		name[temp] = i+1;
		num[i+1] = temp;
	}
	for(int i = 0; i < m; i++){
		int t = 0;
		string temp;
		cin >> temp;
		if(temp[0] > '0' && temp[0] <= '9') t = stoi(temp);
		if(t != 0) cout << num[t] << '\n';
		else cout << name[temp] << '\n';
	}
	return 0;
}