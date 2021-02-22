#include <stdio.h>
int main(){
    int array[1000000];
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++) scanf("%d", &array[i]);
    
    int min;
    int max;
    min = array[0];
    max = array[0];
    for(int i = 1; i < num; i++){
        if(array[i] < min) min = array[i];
        if(array[i] > max) max = array[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}