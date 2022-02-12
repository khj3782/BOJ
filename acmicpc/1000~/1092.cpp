#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
void printVector(vector<int> box){
	vector<int>::iterator iter = box.begin();
	while(iter!=box.end()) {
		cout << "[" << *iter << "]";
		iter++;
	}
	return;
}
*/

int count(vector<int> crane, vector<int> box){
	int cnt = 0;
	if(box.empty()) return 0;

	while(!box.empty()){
		vector<int>::iterator iter1, iter2;
		iter1 = crane.begin();
		iter2 = box.begin();

		while(iter1 < crane.end() && iter2 < box.end()){
			if(*iter1 >= *iter2) {
				box.erase(iter2);
				iter1++;
			}
			else iter2++;
		}
		cnt++;
	}

	return cnt;
}

int main(){
	int n, m;
	cin >> n;

	vector<int> crane;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		crane.push_back(temp);
	}
	sort(crane.begin(), crane.end(), greater<int>());

	cin >> m;

	vector<int> box;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		box.push_back(temp);
	}
	sort(box.begin(), box.end(), greater<int>());

	//box too heavy
	if(crane.front() < box.front() || crane.empty() || box.empty()){
		cout << -1 << '\n';
		return 0;
	}

	//else
	int res = count(crane, box);
	cout << res << '\n';

	return 0;
}
