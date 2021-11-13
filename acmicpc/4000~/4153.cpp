#include <stdio.h>

bool triangle(int a, int b, int c){
	if(a*a == b*b + c*c) return true;
	else if(b*b == a*a + c*c) return true;
	else if(c*c == a*a + b*b) return true;
	else return false;
}

int main(){
	int a, b, c;
	while(true){
		scanf("%d %d %d", &a, &b, &c);
		if(a == 0 && b == 0 && c == 0) break;
		else if(triangle(a, b, c)) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}
