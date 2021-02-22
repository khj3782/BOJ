#include <iostream>
#include <cmath>
using namespace std;

int funcZ(int n, int r, int c){
	if(n == 1){
		if(r == 0 && c == 0) return 0;
		else if(r == 0 && c == 1) return 1;
		else if(r == 1 && c == 0) return 2;
		else if(r == 1 && c == 1) return 3;
	}
	else {
		int f, rd, cd;
		rd = r/pow(2, n-1);
		cd = c/pow(2, n-1);
		if(rd == 0 && cd == 0) f = 0;
		else if(rd == 0 && cd == 1) f = 1;
		else if(rd == 1 && cd == 0) f = 2;
		else if(rd == 1 && cd == 1) f = 3;
		return funcZ(n-1, r % (int)pow(2, n-1), c % (int)pow(2, n-1)) + f*pow(2, 2*n-2);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, r, c;
	cin >> n >> r >> c;
	cout << funcZ(n, r, c) << '\n';
	return 0;
}