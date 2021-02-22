#include <iostream>
#include <queue>
#include <cmath>
#include <utility>
#include <map>
using namespace std;

int BFS(int n, int k){
	map<int, bool> check;
	queue<pair<int, int> > q;
	q.push(make_pair(n, 0));
	while(!q.empty()){
		int temp = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(temp == k) return cnt;
		else{
			check[temp] = true;
			cnt++;
			if(check.find(temp-1)==check.end() && temp-1>=0) q.push(make_pair(temp-1, cnt));
			if(check.find(temp+1)==check.end() && temp+1<=100000) q.push(make_pair(temp+1, cnt));
			if(check.find(temp*2)==check.end() && temp*2<=100000) q.push(make_pair(temp*2, cnt));
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	cout << BFS(n, k) << '\n';
	return 0;
}