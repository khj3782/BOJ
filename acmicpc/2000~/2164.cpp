#include <iostream>
#include <queue>
using namespace std;

int main(){
	int num;
	cin >> num;
	queue<int> q;
	for(int i = 1; i <= num; i++) q.push(i);
	int res = q.front();
	while(q.size() > 1){
		res = q.front();
		q.pop();
		res = q.front();
		if(q.size() > 1){
			q.push(q.front());
			q.pop();
		}
	}
	cout << res << '\n';
	return 0;
}