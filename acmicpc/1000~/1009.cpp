#include <stdio.h>
#include <cmath>
using namespace std;

int number(int a, int b){
	int temp;
	a = a % 10;
	b = b % 4;
	if(a == 0) return 10;
	if(b == 0) b = 4;
	temp = pow(a, b);
	temp = temp % 10;
	return temp;
}

int main(){
	int test;
	scanf("%d", &test);
	for(int i = 0; i < test; i++){
		int a, b, res;
		scanf("%d %d", &a, &b);
		res = number(a, b);
		printf("%d\n", res);
	}
	return 0;
}