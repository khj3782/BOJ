#include <stdio.h>
#include <algorithm>

int main(){
    int num;
    int arr[1000000];
    scanf("%d", &num);
    for(int i = 0; i < num; i++) scanf("%d", &arr[i]);
    std::sort(arr, arr+num);
    for(int i = 0; i < num; i++) printf("%d\n", arr[i]);
    return 0;
}