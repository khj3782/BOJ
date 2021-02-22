#include <stdio.h>
using ll = long long;
int main(){
    ll A, B, C, x1, x2, y1, y2;
    scanf("%lld %lld %lld", &A, &B, &C);
    scanf("%lld %lld %lld %lld", &x1, &x2, &y1, &y2);
    if((A*x1+B*y1+C)*(A*x2+B*y2+C) < 0 || (A*x1+B*y2+C)*(A*x2+B*y1+C) < 0) printf("Poor\n");
    else printf("Lucky\n");
    return 0;
}