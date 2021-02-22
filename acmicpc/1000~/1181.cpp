#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		string input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end(), compare);
	string before = v[0];
	cout << before << '\n';
	for(int i = 1; i < v.size(); i++){
		if(before != v[i]) cout << v[i] << '\n';
		before = v[i];
	}
	return 0;
}