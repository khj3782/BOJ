#include <iostream>
#include <string>
using namespace std;

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int lcs(string a, string b){
	int aa, bb;
	aa = a.length();
	bb = b.length();
	int arr[aa+1][bb+1];
	for(int i = 0; i <= aa; i++){
		for(int j = 0; j <= bb; j++){
			if(i == 0 || j == 0) arr[i][j] = 0;
			else if(a[i-1] == b[j-1]) arr[i][j] = arr[i-1][j-1] + 1;
			else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
		}
	}
	return arr[aa][bb];
}

int main(){
	int res;
	string a, b;
	cin >> a;
	cin >> b;
	res = lcs(a, b);
	cout << res << '\n';
	return 0;
}