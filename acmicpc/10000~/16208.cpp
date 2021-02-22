#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
	ll test, sum, a;
	scanf("%lld", &test);
	ll array[test];
	for(int i = 0; i < test; i++) scanf("%lld", &array[i]);
	sort(array, array+test);
	sum = 0;
	a = array[0];
	for(int i = 1; i < test; i++){
		ll b = array[i];
		sum += a*b;
		a += b;
	}
	printf("%lld\n", sum);
	return 0;
}