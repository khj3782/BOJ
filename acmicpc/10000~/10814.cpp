#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Member{
	int age;
	int index;
	string name;
};

bool compare(Member a, Member b){
	if(a.age == b.age) return a.index < b.index;
	else return a.age < b.age;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<Member> v;
	for(int i = 0; i < n; i++){
		Member m;
		cin >> m.age >> m.name;
		m.index = i;
		v.push_back(m);
	}
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) cout << v[i].age << " " << v[i].name << '\n';
	return 0;
}