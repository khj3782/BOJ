#include <stdio.h>

class Fibo{
  private:
    int* fiboZero = new int[41];
    int* fiboOne = new int[41];
  public:
    Fibo(){
        fiboZero[0] = 1;
        fiboZero[1] = 0;
        fiboOne[0] = 0;
        fiboOne[1] = 1;
    }
    ~Fibo(){
        delete [] fiboZero;
        delete [] fiboOne;
    }
    void fiboCount(int num);
};

void Fibo::fiboCount(int num){
    for(int i = 2; i < num+1; i++){
        fiboZero[i] = fiboZero[i-1] + fiboZero[i-2];
        fiboOne[i] = fiboOne[i-1] + fiboOne[i-2];
    }
    printf("%d %d\n", fiboZero[num], fiboOne[num]);
}

int main(){
    Fibo f;
    int testNum;
    scanf("%d", &testNum);
    for(int i = 0; i < testNum; i++){
        int num;
        scanf("%d", &num);
        f.fiboCount(num);
    }
    return 0;
}