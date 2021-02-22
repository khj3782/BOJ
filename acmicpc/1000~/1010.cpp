#include <stdio.h>

long long min(long long a, long long b){
	if(a > b) return b;
	else return a;
}

long long max(long long a, long long b){
	if(a > b) return a;
	else return b;
}

long long factorial(long long num){
	long long temp = 1;
	for(int i = 1; i <= num; i++) temp *= i;
	return temp;
}

long long factDivide(long long num, long long divnum){
	if(num==divnum) return 1;
	long long temp = divnum+1;
	for(int i = divnum+2; i <= num; i++){
		temp *= i;
	}
	return temp;
}

int main(){
	int test;
	scanf("%d", &test);
	for(int i = 0; i < test; i++){
		long long n, m, res, mini, maxi;
		scanf("%lld %lld", &n, &m);
		mini = min(n, m-n);
		maxi = max(n, m-n);
		res = factDivide(m, maxi)/factorial(mini);
		printf("%lld\n", res);
	}
	return 0;
}