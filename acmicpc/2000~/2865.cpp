#include <iostream>
#include <iomanip>
#include <queue>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	double sum;
	int n, m, k;
	cin >> n >> m >> k;
	map<int, double> mp;
	priority_queue<double> q;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int temp;
			double score;
			cin >> temp;
			cin >> score;
			if(mp.find(temp) == mp.end() || mp[temp] < score) mp[temp] = score;
			else continue;
		}
	}
	for(int j = 1; j <= n; j++) q.push(mp[j]);
	for(int j = 0; j < k; j++) {
		sum += q.top();
		q.pop();
	}
	cout << fixed << setprecision(1) << sum << '\n';
	return 0;
}