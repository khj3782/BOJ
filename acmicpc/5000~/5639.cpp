#include <iostream>
using namespace std;

int array[10000];

void travel(int ida, int idb){
	//exception
	if(ida >= idb) return;
	
	//leaf node
	if(ida == idb-1){
		cout << array[ida] << '\n';
		return;
	}
	
	int idx = ida+1;
	while(array[idx] < array[ida] && idx < idb) idx++;
	
	travel(ida+1, idx);
	travel(idx, idb);
	cout << array[ida] << '\n';
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int i = 0; int n;
	while(cin >> n) {
		if(n == EOF) break;
		array[i++] = n;
	}
	travel(0, i);
	return 0;
}
