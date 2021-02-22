#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int num;
	while(true){
		int len;
		bool palin = true;
		scanf("%d", &num);
		if(num == 0) break;
		string isPalin;
		isPalin = to_string(num);
		len = isPalin.length();
		for(int i = 0; i < len/2; i++){
			if(isPalin[i] != isPalin[len-i-1]) palin = false;
		}
		if(palin) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}