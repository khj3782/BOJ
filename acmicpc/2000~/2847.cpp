#include <stdio.h>
int main(){
    int num;
    int cnt{0};
    scanf("%d", &num);
    int array[num];
    for(int i = 0; i < num; i++) scanf("%d", &array[i]);
    for(int j = num-1; j > 0; j--){
        while(array[j]<=array[j-1]){
            array[j-1]--;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}