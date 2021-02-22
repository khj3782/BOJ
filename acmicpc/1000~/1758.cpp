#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
	int n;
	ll sum{0};
	scanf("%d", &n);
	ll array[n];
	for(int i = 0; i < n; i++) scanf("%lld", &array[i]);
	sort(array, array+n);
	for(int j = 0; j < n; j++) {
		if(array[n-j-1]-j > 0) sum += (array[n-j-1]-j);
	}
	printf("%lld\n", sum);
	return 0;
}