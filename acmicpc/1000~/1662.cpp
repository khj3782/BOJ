#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Node{
	int val;
	bool start = false;
};

//for debugging
/*
void printStack(stack<Node>& s){
	if(s.empty()){
		cout << "empty stack" << '\n';
		return;
	}
	
	stack<Node> temp;
	
	while(!s.empty()) {
		temp.push(s.top());
		s.pop();
	}
	
	while(!temp.empty()){
		Node t = temp.top();
		cout << "[" << t.val << "]";
		s.push(t);
		temp.pop();
	}
	
	cout << '\n';
	
	return;
}
*/

void calculate(stack<Node>& s){
	int res = 0;
	
	while(!s.top().start){
		res += s.top().val;
		s.pop();
	}

	res *= s.top().val;
	s.pop();
	res += s.top().val;
	s.pop();

	Node r;
	r.val = res;

	s.push(r);
	
	return;
}

int main(){
	stack<Node> s;
	string str;

	cin >> str;
	int len = str.length();
	int res = 0, i = 0, strlen = 0;

	if(len == 0){
		cout << 0 << '\n';
		return 0;
	}

	while(i < len){
		if(str[i] == '('){
			Node a, b;
			a.val = strlen - 1;
			b.val = str[i-1]-'0';
			b.start = true;
			
			s.push(a);
			s.push(b);
			
			strlen = 0;
			
			//printStack(s);
		}
		
		else if(str[i] == ')'){
			if(str[i-1] == '(' || strlen > 0) {
				Node a;
				a.val = strlen;
				
				s.push(a);
			}
			
			//printStack(s);
			
			strlen = 0;
			calculate(s);
			
			//printStack(s);
		}
		
		else strlen++;

		i++;
	}

	res += strlen;

	while(!s.empty()){
		res += s.top().val;
		s.pop();
	}

	cout << res << '\n';

	return 0;
}
