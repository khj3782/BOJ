#include <iostream>
using namespace std;

int max(int  a, int b){
	if(a > b) return a;
	else return b;
}

int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int maxi(int a, int b){
	int temp = max(a, b) % min(a, b);
	if(temp == 0) return min(a, b);
	else return maxi(min(a, b), temp);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	int maxDiv, minMul;
	maxDiv = maxi(a, b);
	minMul = a * b / maxDiv;
	cout << maxDiv << '\n' << minMul << '\n';
	return 0;
}