#include <iostream>
#include <string>
#include <bitset>
using namespace std;

class Set{
	private:
		bitset<20> b;
	public:
		Set(){b = 0b0000'0000'0000'0000'0000;}
		void add(int x);
		void remove(int x);
		void check(int x);
		void toggle(int x);
		void all();
		void empty();
};

void Set::add(int x){
	b.set(x-1);
}

void Set::remove(int x){
	b.reset(x-1);
}

void Set::check(int x){
	cout << b.test(x-1) << '\n';
}

void Set::toggle(int x){
	b.flip(x-1);
}

void Set::all(){
	b = ~b;
}

void Set::empty(){
	b = 0b0000'0000'0000'0000'0000;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int num, input;
	cin >> num;
	Set s;
	for(int i = 0; i < num; i++){
		string order;
		cin >> order;
		if(order == "add"){
			cin >> input;
			s.add(input);
		}
		else if(order == "remove"){
			cin >> input;
			s.remove(input);
		}
		else if(order == "check"){
			cin >> input;
			s.check(input);
		}
		else if(order == "toggle"){
			cin >> input;
			s.toggle(input);
		}
		else if(order == "all") s.all();
		else if(order == "empty") s.empty();
	}
	return 0;
}