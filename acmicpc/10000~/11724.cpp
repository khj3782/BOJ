#include <iostream>
#include <vector>
using namespace std;

class graph{
	private:
		vector<int>* array = new vector<int>[1001];
		bool check[1001];
	public:
		graph(){
            for(int i = 0; i < 1001; i++){
                vector<int> v;
                array[i] = v;
                check[i] = false;
            }
        }
		~graph(){delete [] array;}
		void push(int v, int w);
		void traverse(int idx);
		bool getCheck(int idx){return check[idx];}
};

void graph::push(int v, int w){
	array[v].push_back(w);
	array[w].push_back(v);
}

void graph::traverse(int idx){
	if(!check[idx]){
		check[idx] = true;
		for(int i = 0; i < array[idx].size(); i++) traverse(array[idx][i]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int node, edge;
	cin >> node >> edge;
	graph g;
	int cnt = 0;
	for(int i = 0; i < edge; i++){
		int v, w;
		cin >> v >> w;
		g.push(v, w);
	}
	for(int i = 1; i <= node; i++) {
		if(!g.getCheck(i)) {
			g.traverse(i);
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}