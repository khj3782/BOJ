#include <stdio.h>

int minTwo(int a, int b){
	if(a > b) return b;
	else return a;
}

int minThree(int a, int b, int c){
	int res;
	res = a;
	if(b < res) res = b;
	if(c < res) res = c;
	return res;
}

int main(){
	 int array[1000001];
	 array[1] = 0;
	 array[2] = 1;
	 array[3] = 1;
	 for(int i = 4; i <= 1000001; i++){
	 	if(i%3 == 0 && i%2 != 0) array[i] = minTwo(array[i-1], array[i/3]) + 1;
		else if(i%3 != 0 && i%2 == 0) array[i] = minTwo(array[i-1], array[i/2]) + 1;
		else if(i%3 == 0 && i%2 == 0) array[i] = minThree(array[i-1], array[i/2], array[i/3]) + 1;
		else array[i] = array[i-1] + 1;
	 }
	 int num;
	 scanf("%d", &num);
	 printf("%d\n", array[num]);
	 return 0;
}