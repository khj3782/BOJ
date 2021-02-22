#include <stdio.h>
#include <queue>

struct Com{
	int value;
	Com* right;
};

class Network{
	private:
		Com* head;
	public:
		Network(){head = NULL;}
		~Network(){delete head;}
		void connect(int valueInput);
		Com* getHead(){ return head; }
};

void Network::connect(int valueInput){
	Com* temp = new Com();
	temp->value = valueInput;
	temp->right = NULL;
	if(head == NULL) head = temp;
	else {
		Com* iter = new Com();
		iter = head;
		while(iter->right != NULL) iter = iter->right;
		iter->right = temp;
	}
}

void traverse(Network n[101], bool connected[101], int start){
	Com* temp = new Com();
	temp = n[start].getHead();
	std::queue<int> q;
	while(temp != NULL){
		if(!connected[temp->value]) {
			q.push(temp->value);
			connected[temp->value] = true;
		}
		temp = temp->right;
	}
	while(!q.empty()) {
		int num;
		num = q.front();
		q.pop();
		traverse(n, connected, num);
	}
}

int main(){
	int num, con;
	scanf("%d", &num);
	scanf("%d", &con);
	Network net[101];
	bool connected[101];
	for(int i = 1; i <= num; i++) {
		net[i].connect(i);
		connected[i] = false;
	}
	for(int i = 0; i < con; i++){
		int id1, id2;
		scanf("%d %d", &id1, &id2);
		net[id1].connect(id2);
		net[id2].connect(id1);
	}
	connected[1] = true;
	traverse(net, connected, 1);

	int cnt{0};
	for(int i = 1; i <= num; i++){
		if(connected[i]) cnt++;
	}
	printf("%d\n", cnt-1);
	return 0;
}