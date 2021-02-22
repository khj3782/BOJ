#include <stdio.h>

int blueCnt(int arr[128][128], int x, int y, int size){
	if(size==1){
		if(arr[x][y] == 1) return 1;
		else return 0;
	}
	else{
		int temp;
		temp = arr[x][y];
		bool isUnion = true;
		for(int i = x; i < x+size; i++){
			for(int j = y; j < y+size; j++){
				if(temp != arr[i][j]) isUnion = false;
			}
		}
		if(isUnion && temp == 1) return 1;
		else{
			int cnt{0};
			cnt += (blueCnt(arr, x, y, size/2) + blueCnt(arr, x+size/2, y, size/2));
			cnt += (blueCnt(arr, x, y+size/2, size/2) + blueCnt(arr, x+size/2, y+size/2, size/2));
			return cnt;
		}
	}
}

int whiteCnt(int arr[128][128], int x, int y, int size){
	if(size==1){
		if(arr[x][y] == 0) return 1; 
		else return 0;
	}
	else{
		int temp; 
		temp = arr[x][y];
		bool isUnion = true; 
		for(int i = x; i < x+size; i++){
			for(int j = y; j < y+size; j++){      
				if(temp != arr[i][j]) isUnion = false;  
			}
		}
		if(isUnion && temp == 0) return 1;
		else{
			int cnt{0};
			cnt += (whiteCnt(arr, x, y, size/2) + whiteCnt(arr, x+size/2, y, size/2));
			cnt += (whiteCnt(arr, x, y+size/2, size/2) + whiteCnt(arr, x+size/2, y+size/2, size/2));
			return cnt;
		}
	}
}

int main(){
	int N;
	scanf("%d", &N);
	int paper[128][128];
	for(int j = 0; j < N; j++){
		for(int i = 0; i < N; i++){
			scanf("%d", &paper[i][j]);
		}
	}
	printf("%d\n", whiteCnt(paper, 0, 0, N));
	printf("%d\n", blueCnt(paper, 0, 0, N));
	return 0;
}