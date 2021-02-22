#include <stdio.h>
int main(){
    int n;
    int tot{0};
    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);
        tot += n*n;
    }
    printf("%d", tot % 10);
    return 0;
}