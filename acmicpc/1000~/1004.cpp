#include <stdio.h>
#include <cmath>
using namespace std;

double dist(double x1, double y1, double x2, double y2){
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
	int test;
	scanf("%d", &test);
	for(int i = 0; i < test; i++){
		double x1, y1, x2, y2;
		int num, cnt;
		cnt = 0;
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
		scanf("%d", &num);
		for(int j = 0; j < num; j++){
			double cx, cy, r;
			scanf("%lf %lf %lf", &cx, &cy, &r);
			if(dist(x1, y1, cx, cy) < r && dist(x2, y2, cx, cy) < r) continue;
			else if(dist(x1, y1, cx, cy) < r || dist(x2, y2, cx, cy) < r) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}