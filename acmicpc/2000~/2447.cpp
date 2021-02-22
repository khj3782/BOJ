#include <stdio.h>
bool is_zero(int row, int col){
    while((row>0)||(col>0)){
        if((row%3==1)&&(col%3==1)) return true;
        else row/=3, col/=3;
    }
    return false;
}

int main(){
    int input;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        for(int j = 0; j < input; j++){
            if(is_zero(i, j)) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}