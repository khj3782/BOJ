#include <iostream>
using namespace std;

class minHeap{
	private:
		int heap[100001] = {0};
		int size;
	public:
		minHeap(){size=1;}
		void insert(int input);
		void swap(int a, int b);
		void pop();
		bool empty();
};

void minHeap::insert(int input){
	heap[size] = input;
	int idx = size;
	size++;
	while(heap[idx] < heap[idx/2] && idx > 1){
		swap(idx, idx/2);
		idx /= 2;
	}
}

void minHeap::swap(int a, int b){
	int temp = heap[a];
	heap[a] = heap[b];
	heap[b] = temp;
}

void minHeap::pop(){
	if(empty()) cout << 0 << '\n';
	else{
		cout << heap[1] << '\n';
		size--;
		swap(1, size);
		int idx = 1;
		while(idx*2 < size){
			if(idx*2 == size-1){
				if(heap[idx] > heap[idx*2]){
					swap(idx, idx*2);
					idx = 2*idx;
				}
				break;
			}
			else if(heap[2*idx] >= heap[2*idx+1] && heap[2*idx+1] < heap[idx]){
				swap(idx, 2*idx+1);
				idx = 2*idx+1;
			}
			else if(heap[2*idx] < heap[2*idx+1] && heap[2*idx] < heap[idx]){
				swap(idx, 2*idx);
				idx = 2*idx;
			}
			else break;
		}
	}
}

bool minHeap::empty(){
	return size==1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test;
	cin >> test;
	minHeap m;
	for(int i = 0; i < test; i++){
		int input;
		cin >> input;
		if(input == 0) m.pop();
		else m.insert(input);
	}
	return 0;
}