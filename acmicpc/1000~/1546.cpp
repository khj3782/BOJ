#include <stdio.h>
int main(){
    float num;
    float tot, temp;
    tot=0.0;
    scanf("%f", &num);
    float array[(int)num];
    for(int i = 0; i < num; i++){
        scanf("%f", &temp);
        tot+=temp;
        array[i] = temp;
    }
    
    float max{0};
    for(int i = 0; i < num; i++){
        if(array[i] > max) max = array[i];
    }
    printf("%f\n", (tot/num) * (100/max));
    return 0;
}