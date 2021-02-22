#include <stdio.h>
#include <algorithm>
int main(){
    int num;
    scanf("%d", &num);
    int array[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }
    std::sort(array, array+num);
    for(int i = 0; i < num; i++) printf("%d\n", array[i]);
    return 0;
}