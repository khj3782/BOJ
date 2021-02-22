#include <stdio.h>
int min(int x, int y, int z, int w){
    int m = x;
    if(y < m) m = y;
    if(z < m) m = z;
    if(w < m) m = w;
    return m;
}
int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w ,&h);
    printf("%d\n", min(x, y, h-y, w-x));
    return 0;
}