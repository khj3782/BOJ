#include <iostream>
#include <string>
using namespace std;

bool isPS(string ps){
	int left = 1;
	if(ps[0] != '(') return false;
	for(int i = 1; i < ps.length(); i++){
		if(left < 0) return false;
		if(ps[i] == '(') left++;
		else if(ps[i] == ')') left--;
	}
	if(left == 0) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test;
	cin >> test;
	for(int i = 0; i < test; i++){
		string ps;
		cin >> ps;
		if(isPS(ps)) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}