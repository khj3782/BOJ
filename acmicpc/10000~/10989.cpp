#include <stdio.h>
using namespace std;
int main(){
    int num, temp, max;
    max = 0;
    scanf("%d", &num);
    int arr[10001]={0};
    for(int i = 0; i < num; i++) {
        scanf("%d", &temp);
        arr[temp]++;
        if(temp > max) max = temp;
    }
    for(int i = 1; i <= max; i++){
        for(int j = 0; j < arr[i]; j++) printf("%d\n", i);
    }
    return 0;
}