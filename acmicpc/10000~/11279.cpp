#include <iostream>
using namespace std;

class maxHeap{
	private:
		int heap[100001] = {0};
		int idx;
	public:
		maxHeap(){idx = 1;}
		bool empty();
		void swap(int id1, int id2);
		void insert(int input);
		void pop();
};

bool maxHeap::empty(){
	return idx == 1;
}

void maxHeap::swap(int id1, int id2){
	int temp = heap[id1];
	heap[id1] = heap[id2];
	heap[id2] = temp;
}

void maxHeap::insert(int input){
	heap[idx] = input;
	int tmp = idx;
	idx++;
	while(heap[tmp] > heap[tmp/2] && tmp > 1){
		swap(tmp, tmp/2);
		tmp /= 2;
	}
}

void maxHeap::pop(){
	if(empty()) cout << 0 << '\n';
	else{
		cout << heap[1] << '\n';
		idx--;
		swap(1, idx);
		int tmp = 1;
		while(tmp*2 < idx){
			if(tmp*2 == idx-1){
				if(heap[tmp] < heap[tmp*2]) swap(tmp, tmp*2);
				break;
			}
			else if(heap[tmp*2] <= heap[tmp*2+1] && heap[tmp] < heap[tmp*2+1]){
				swap(tmp*2+1, tmp);
				tmp = tmp*2+1;
			}
			else if(heap[tmp*2] > heap[tmp*2+1] && heap[tmp] < heap[tmp*2]){
				swap(tmp*2, tmp);
				tmp *= 2;
			}
			else break;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	maxHeap m;
	int test;
	cin >> test;
	for(int i = 0; i < test; i++){
		int input;
		cin >> input;
		if(input == 0) m.pop();
		else m.insert(input);
	}
	return 0;
}