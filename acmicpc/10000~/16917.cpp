#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int A, B, C, X, Y, first, second;
	scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);
	if(X > Y) {
		first = min(A*Y + B*Y, C*2*Y);
		second = min(A*(X - Y), 2*C*(X - Y));
	}
	else {
		first = min(A*X + B*X, C*2*X);
		second = min(B*(Y - X), 2*C*(Y - X)); 
	}
	printf("%d\n", first+second);
	return 0;
}