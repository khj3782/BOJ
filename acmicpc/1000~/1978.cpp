#include <stdio.h>

bool isPrime(int n){
	for(int i = 2; i <= n/2; i++){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
	int num;
	int cnt{0};
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		int temp;
		scanf("%d", &temp);
		if(temp != 1 && isPrime(temp)) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}