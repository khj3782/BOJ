#include <stdio.h>
#include <cmath>

using namespace std;

bool isPrime(int num){
	if(num == 1) return false;
	for(int i = 2; i < sqrt(num)+1; i++){
		if(num % i == 0) return false;
	}
	return true;
}

int main(){
	int inputNum{-1};
	while(true){
		scanf("%d", &inputNum);
		if(inputNum == 0) break;
		int temp = 3;
		bool istrue = false;
		while(temp < inputNum/2 + 1){
			if(isPrime(temp) && isPrime(inputNum - temp)) {
				istrue = true;
				printf("%d = %d + %d\n", inputNum, temp, inputNum-temp);
				break;
			}
			else temp += 2;
		}
		if(!istrue) printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}