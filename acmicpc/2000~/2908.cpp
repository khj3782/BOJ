#include <stdio.h>
int reverse(int orig){
    int res;
    res = (orig%10)*100 + ((orig/10)%10)*10 + orig/100;
    return res;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a = reverse(a);
    b = reverse(b);
    if(a > b) printf("%d\n", a);
    else printf("%d\n", b);
    return 0;
}