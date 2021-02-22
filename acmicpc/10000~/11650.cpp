#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct dot{
	int x;
	int y;
};

bool compare(dot a, dot b){
	if(a.x == b.x) return a.y < b.y;
	else return a.x < b.x;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int num;
	cin >> num;
	vector<dot> v;
	for(int i = 0; i < num; i++){
		dot d;
		cin >> d.x >> d.y;
		v.push_back(d);
	}
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) cout << v[i].x << " " << v[i].y << '\n';
	return 0;
}