#include <stdio.h>
int sub(int a, int b){
    if(a > b) return a-b;
    else return b-a;
}
int main(){
    int n, num, min;
    scanf("%d %d", &n, &num);
    int index{0};
    int array[n];
    int sum[n*(n-1)*(n-2)/6];
    for(int i = 0; i < n; i++) scanf("%d", &array[i]);
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                sum[index] = array[i] + array[j] + array[k];
                index++;
            }
        }
    }
    min = sum[0];
    for(int i = 0; i < n*(n-1)*(n-2)/6; i++){
        if(sub(sum[i], num) < sub(min, num) && sum[i] <= num) min = sum[i];
    }
    printf("%d\n", min);
    return 0;
}