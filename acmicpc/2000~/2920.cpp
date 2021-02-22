#include <stdio.h>

int main(){
    bool asc = true;
    bool des = true;
    int array[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 7; i++){
        if(array[i] < array[i+1]) des = false;
        if(array[i] > array[i+1]) asc = false;
    }
    if(asc) printf("ascending");
    else if(des) printf("descending");
    else printf("mixed");
    return 0;
}