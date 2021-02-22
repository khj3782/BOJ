#include <stdio.h>
#include <string>
using namespace std;
int main(){
    int a, b, b2, b1, b0;
    string bString;
    scanf("%d", &a);
    scanf("%d", &b);
    bString = to_string(b);
    b2 = bString[2]-'0';
    b1 = bString[1]-'0';
    b0 = bString[0]-'0';
    printf("%d\n", a*b2);
    printf("%d\n", a*b1);
    printf("%d\n", a*b0);
    printf("%d\n", a*b);
    return 0;
}