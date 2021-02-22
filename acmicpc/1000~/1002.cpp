#include <stdio.h>
#include <cmath>
using namespace std;

float dist(float x1, float y1, float x2, float y2){
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

bool isTriangle(float x, float y, float z){
    if(x+y>z && y+z>x && z+x>y) return true;
    else return false;
}

bool isInline(float x, float y, float z){
    if(x+y==z || y+z==x || z+x==y) return true;
    else return false;
}

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        float x1, y1, r1, x2, y2, r2;
        scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);
        if(x1 == x2 && y1 == y2 && r1 == r2) printf("-1\n");
        else if(!isTriangle(r1, r2, dist(x1, y1, x2, y2)) && !isInline(r1, r2, dist(x1, y1, x2, y2))){
            printf("0\n");
        }
        else if(isInline(r1, r2, dist(x1, y1, x2, y2))) printf("1\n");
        else printf("2\n");
    }
    return 0;
}