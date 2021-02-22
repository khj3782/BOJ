#include <iostream>
#include <queue>
#include <utility>
using namespace std;

class Tomato{
	private:
		int w;
		int r;
		int cnt;
		queue<pair<int, int> > ripe;
		int box[1000][1000];
		bool flag[1000][1000];
	public:
		Tomato(){}
		Tomato(int width, int row){
			w = width;
			r = row;
			cnt = 0;
			int temp;
			for(int j = 0; j < row; j++){
				for(int i = 0; i < width; i++){
					cin >> temp;
					box[i][j] = temp;
					flag[i][j] = false;
					if(temp == 1) ripe.push(make_pair(i, j));
				}
			}
		}
		bool isRipe();
		//void print();
		void update(int x, int y, int cnt);
		void ripen();
		int getCnt();
};

/*
void Tomato::print(){
	for(int j = 0; j < r; j++){
		for(int i = 0; i < w; i++) cout << box[i][j] << " ";
		cout << '\n';
	}
}
*/

int Tomato::getCnt(){
	int max = 1;
	for(int i = 0; i < w; i++){
		for(int j = 0; j < r; j++){
			if(box[i][j] > max) max = box[i][j];
		}
	}
	return max-1;
}

bool Tomato::isRipe(){
	for(int i = 0; i < w; i++){
		for(int j = 0; j < r; j++){
			if(box[i][j] == 0) return false;
		}
	}
	return true;
}

void Tomato::update(int x, int y, int cnt){
	box[x][y] = cnt+1;
	flag[x][y] = true;
}

void Tomato::ripen(){
	while(!ripe.empty()){
		pair<int, int> temp = ripe.front();
		ripe.pop();
		int x = temp.first;
		int y = temp.second;
		if(!flag[x+1][y] && box[x+1][y] == 0 && x+1 < w){
			update(x+1, y, box[x][y]);
			ripe.push(make_pair(x+1, y));
		}
		if(!flag[x-1][y] && box[x-1][y] == 0 && x-1 >= 0){
			update(x-1, y, box[x][y]);
			ripe.push(make_pair(x-1, y));
		}
		if(!flag[x][y+1] && box[x][y+1] == 0 && y+1 < r){
			update(x, y+1, box[x][y]);
			ripe.push(make_pair(x, y+1));
		}
		if(!flag[x][y-1] && box[x][y-1] == 0 && y-1 >= 0){
			update(x, y-1, box[x][y]);
			ripe.push(make_pair(x, y-1));
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int w, r;
	cin >> w >> r;
	Tomato tomato(w, r);
	tomato.ripen();
	//tomato.print();
	if(tomato.isRipe()) cout << tomato.getCnt() << '\n';
	else cout << -1 << '\n';
	return 0;
}
