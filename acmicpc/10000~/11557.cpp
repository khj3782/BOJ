#include <stdio.h>
#include <string>
using namespace std;
int main(){
	int test, num;
	scanf("%d", &test);
	for(int i = 0; i < test; i++){
		scanf("%d", &num);
		int max{0};
		int temp1;
		char school[20]{0};
		char temp2[20]{0};
		for(int j = 0; j < num; j++){
			scanf("%s %d", temp2, &temp1);
			if(temp1 > max) {
				max = temp1;
				for(int k = 0; k < 20; k++) school[k] = temp2[k];
			}
		}
		printf("%s\n", school);
	}
	return 0;
}