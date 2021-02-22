#include <stdio.h>
int main(){
    int num, a, temp;
    scanf("%d %d", &num, &a);
    for(int i = 0; i < num; i ++){
        scanf("%d", &temp);
        if(temp < a) printf("%d ", temp);
    }
    printf("\n");
    return 0;
}