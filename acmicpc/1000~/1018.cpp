#include <stdio.h>

int cntPaint(int x1, int x2, int y1, int y2, char chess[50][50]){
	int cnt{0};
	char start = chess[x1][y1];
	for(int i = x1; i < x2; i++){
		for(int j = y1; j < y2; j++){
			if((i+j)%2 == (x1+y1)%2 && chess[i][j] != start) cnt++;
			else if((i+j)%2 != (x1+y1)%2 && chess[i][j] == start) cnt++;
		}
	}
    if(cnt > 32) return 64-cnt;
	return cnt;
}

int main(){
	int x, y, min;
	char temp[50];
	char chess[50][50];
	scanf("%d %d", &y, &x);
	for(int j = 0; j < y; j++) {
		scanf("%s", temp);
		for(int i = 0; i < x; i++) chess[i][j] = temp[i];
	}
	min = cntPaint(0, 8, 0, 8, chess);
	for(int i = 0; i < x-7; i++){
		for(int j = 0; j < y-7; j++){
			if(min > cntPaint(i, i+8, j, j+8, chess)) min = cntPaint(i, i+8, j, j+8, chess);
		}
	}
	printf("%d\n", min);
	return 0;
}