#include <stdio.h>
#include <queue>

using namespace std;

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

int next(int array[1000001], int num){
	int here;
	here = array[num];
	if(num%3 == 0 && array[num/3] == here-1) return num/3;
	else if(num%2 == 0 && array[num/2] == here-1) return num/2;
	else return num-1;
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
	 int num, temp;
	 queue<int> q;
	 scanf("%d", &num);
	 temp = num;
	 q.push(temp);
	 while(temp != 1) {
		 temp = next(array, temp);
		 q.push(temp);
	 }
	 printf("%d\n", array[num]);
	 while(!q.empty()) {
		 printf("%d ", q.front());
		 q.pop();
	 }
	 printf("\n");
	 return 0;
}