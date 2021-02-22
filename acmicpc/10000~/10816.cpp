#include <stdio.h>
#include <map>
using namespace std;

int main(){
	int n1, n2;
	map<int, int> m;
	scanf("%d", &n1);
	for(int i = 0; i < n1; i++){
		int temp;
		scanf("%d", &temp);
		if(m.find(temp) == m.end()) m[temp] = 1;
		else m[temp]++;
	}
	scanf("%d", &n2);
	for(int j = 0; j < n2-1; j++){
		int temp;
		scanf("%d", &temp);
		if(m.find(temp) == m.end()) printf("0 ");
		else printf("%d ", m[temp]);
	}
	int temp;
	scanf("%d", &temp);
	if(m.find(temp) == m.end()) printf("0\n");             
	else printf("%d\n", m[temp]);
	return 0;
}