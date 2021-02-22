#include <stdio.h>
#include <cmath>
using namespace std;
int distPow(int x1, int y1, int x2, int y2){
    return pow(x1-x2, 2) + pow(y1-y2, 2);
}

bool isInline(int x1, int x2, int x3, int y1, int y2, int y3){
    if((x1-x2)*(y2-y3)==(x2-x3)*(y1-y2)) return true;
    else return false;
}

int whatTriangle(int x, int y, int z){
    if(x+y==z||y+z==x||z+x==y) return 1;
    else if(x+y<z||y+z<x||z+x<y) return 2;
    else return 3;
}

int main(){
    int x[3];
    int y[3];
    int dist[3];
    for(int i = 0; i < 3; i++) scanf("%d %d", &x[i], &y[i]);
    dist[0] = distPow(x[0], y[0], x[1], y[1]);
    dist[1] = distPow(x[1], y[1], x[2], y[2]);
    dist[2] = distPow(x[0], y[0], x[2], y[2]);
    if(isInline(x[0], x[1], x[2], y[0], y[1], y[2])) printf("X\n");
    else if(dist[0]==dist[1]&&dist[1]==dist[2]&&dist[2]==dist[0]) printf("JungTriangle\n");
    else if(dist[0]==dist[1]||dist[1]==dist[2]||dist[2]==dist[0]){
        switch(whatTriangle(dist[0], dist[1], dist[2])){
            case 1:
                printf("Jikkak2Triangle\n");
                break;
            case 2:
                printf("Dunkak2Triangle\n");
                break;
            case 3:
                printf("Yeahkak2Triangle\n");
                break;
        }
    }
    else{
        switch(whatTriangle(dist[0], dist[1], dist[2])){
            case 1:
                printf("JikkakTriangle\n");
                break;
            case 2:
                printf("DunkakTriangle\n");
                break;
            case 3:
                printf("YeahkakTriangle\n");
                break;
        }
    }
    return 0;
}