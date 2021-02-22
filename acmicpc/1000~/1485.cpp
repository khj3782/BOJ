#include <stdio.h>
#include <cmath>
using namespace std;

float min(float arr[6]){
    float min;
    min=arr[0];
    for(int i = 1; i < 6; i++){
        if(min > arr[i]) min = arr[i];
    }
    return min;
}

float dist(float x1, float y1, float x2, float y2){
    float x, y, distance;
    x = pow((x1-x2),2);
    y = pow((y1-y2),2);
    distance = sqrt(x+y);
    return distance;
}

int main(){
    int num;
    scanf("%d", &num);
    for(int k = 0; k < num; k++){
        int cnt{0};
        int cnt2{0};
        bool mid = false;
        bool edge = false;
        float xArr[4];
        float yArr[4];
        float distArr[6];
        float midX, midY, mini;
        for(int i = 0; i < 4; i++) scanf("%f %f", &xArr[i], &yArr[i]);
        for(int i = 0; i < 3; i++){
            for(int j = i+1; j < 4; j++) {
                distArr[cnt] = dist(xArr[i], yArr[i], xArr[j], yArr[j]);
                cnt++;
            }
        }
        mini = min(distArr);
        for(int i = 0; i < 6; i++){
            if(mini == distArr[i]) cnt2++;
        }
        if(cnt2 == 4) edge = true;
        midX = (xArr[0]+xArr[1]+xArr[2]+xArr[3])/4.0;
        midY = (yArr[0]+yArr[1]+yArr[2]+yArr[3])/4.0;
        float d = dist(midX, midY, xArr[0], yArr[0]);
        if(d==dist(midX,midY,xArr[1],yArr[1])&&d==dist(midX,midY,xArr[2],yArr[2])&&d==dist(midX,midY,xArr[3],yArr[3])){
            mid = true;
        }
        printf("%d\n", mid && edge);
    }
    return 0;
}