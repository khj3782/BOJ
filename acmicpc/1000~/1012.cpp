#include <stdio.h>

class Land{
	private:
		int x;
		int y;
		int num;
		bool arr[50][50];
		bool flag[50][50];
	public:
		Land(int xin, int yin, int numin){
			x = xin;
			y = yin;
			num = numin;
			for(int i = 0; i < x; i++){
				for(int j = 0; j < y; j++) {
					arr[i][j] = false;
					flag[i][j] = false;
				}
			}
		}
		void updateArr(int x, int y){
			arr[x][y] = true;
		}
		void search(int xin, int yin){
			if(arr[xin][yin] && !flag[xin][yin]){
				flag[xin][yin] = true;
				if(xin > 0) search(xin-1, yin); //left
				if(yin > 0) search(xin, yin-1); //up
				if(xin < x-1) search(xin+1, yin); //right
				if(yin < y-1) search(xin, yin+1); //down
			}
		}
		bool hasVisited(int x, int y){
			return flag[x][y];
		}
		bool cabbage(int x, int y){
			return arr[x][y];
		}
};

int main(){
	int testNum;
	scanf("%d", &testNum);
	for(int t = 0; t < testNum; t++){
		int x;
		int y;
		int num;
		int cnt{0};
		scanf("%d %d %d", &x, &y, &num);
		Land land(x, y, num);
		for(int i = 0; i < num; i++){
			int x2;
			int y2;
			scanf("%d %d", &x2, &y2);
			land.updateArr(x2, y2);
		}
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				if(land.cabbage(i, j) && !land.hasVisited(i, j)){
					land.search(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}