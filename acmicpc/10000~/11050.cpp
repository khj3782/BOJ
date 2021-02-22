#include <stdio.h>
int factorial(int n){
    int temp = 1;
    for(int i = 2; i <= n; i++) temp *= i;
    return temp;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", factorial(n)/(factorial(k)*factorial(n-k)));
    return 0;
}