#include <iostream>
#include <queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	queue<int> q;
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++) q.push(i+1);
	cout << "<";
	while(!q.empty()){
		for(int i = 0; i < m-1; i++){
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if(!q.empty()) cout << ", ";
	}
	cout << ">" << '\n';
	return 0;
}