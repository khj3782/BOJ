#include <iostream>
using ll = long long;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll array[1001] = {0};
	array[1] = 1;
	array[2] = 2;
	for(int i = 3; i <= 1000; i++) array[i] = (array[i-1] + array[i-2]) % 10007;
	ll input;
	cin >> input;
	cout << array[input] << '\n';
	return 0;
}