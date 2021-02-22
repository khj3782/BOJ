#include <iostream>
using namespace std;

int min(int a, int b){
	if(a > b) return b;
	else return a;
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << x + y + min(x, y)/10 << '\n';
	return 0;
}