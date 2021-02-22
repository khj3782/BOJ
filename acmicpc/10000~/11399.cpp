#include <iostream>
#include <algorithm>
using namespace std;

int sum(int array[1000], int idx){
	int temp{0};
	for(int i = 0; i <= idx; i++) temp += array[i];
	return temp;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int num;
	cin >> num;
	int temp{0};
	int array[1000];
	for(int i = 0; i < num; i++) cin >> array[i];
	sort(array, array+num);
	for(int i = 0; i < num; i++) temp += sum(array, i);
	cout << temp << '\n';
	return 0;
}