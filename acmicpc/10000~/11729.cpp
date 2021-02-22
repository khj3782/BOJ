#include <stdio.h>
int count(int num){
    if(num==1) return 1;
    else return 1+2*count(num-1);
}
void hanio(int start, int end, int pass, int num){
    if(num==1) printf("%d %d\n", start, end);
    else{
        hanio(start, pass, end, num-1);
        printf("%d %d\n", start, end);
        hanio(pass, end, start, num-1);
    }
}
int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", count(num));
    hanio(1, 3, 2, num);
}