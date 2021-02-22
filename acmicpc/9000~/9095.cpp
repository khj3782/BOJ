#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test;
	cin >> test;
	int array[11] = {0};
	array[1] = 1;
	array[2] = 2;
	array[3] = 4;
	for(int i = 4; i <= 10; i++) array[i] = array[i-1] + array[i-2] + array[i-3];
	for(int i = 0; i < test; i++){
		int num;
		cin >> num;
		cout << array[num] << '\n';
	}
	return 0;
}