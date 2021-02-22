#include <stdio.h>
int main(){
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    if(minute >= 45) printf("%d %d", hour, minute-45);
    else if(minute < 45 && hour > 0) printf("%d %d", hour-1, minute+15);
    else printf("%d %d", 23, minute+15);
    return 0;
}