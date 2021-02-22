#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test;
	int cnt = 1;
	cin >> test;
	pair<int, int> p[100000];
	for(int i = 0; i < 100000; i++) p[i] = make_pair(0, 0);
	for(int i = 0; i < test; i++){
		int k, v;
		cin >> k;
		cin >> v;
		p[i] = make_pair(v, k);
	}
	sort(p, p+test);
	int temp = p[0].first;
	for(int i = 1; i < test; i++){
		if(p[i].second >= temp){
			cnt++;
			temp = p[i].first;
		}
	}
	cout << cnt << '\n';
	return 0;
}