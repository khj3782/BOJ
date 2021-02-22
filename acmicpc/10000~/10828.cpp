#include <iostream>
#include <string>
using namespace std;

class Stack{
    private:
        int* stack;
        int topIndex;
        int capacity;
    public:
        Stack(int cap);
        void push(const int& value);
        bool empty();
        int pop();
        int size();
        int& top();
};

Stack::Stack(int cap){
    capacity = cap;
    stack = new int[capacity+1];
    stack[0] = -1;
    topIndex = 0;
}

void Stack::push(const int& value){
    if(topIndex == capacity-1){
        int* newStack;
        newStack = new int[capacity*2];
        for(int i = 0; i <= capacity; i++) newStack[i] = stack[i];
        stack = newStack;
        topIndex++;
        capacity *= 2;
        stack[topIndex] = value;
    }
    else{
        topIndex++;
        stack[topIndex] = value;
    }
}

bool Stack::empty(){
    return topIndex==0;
}

int Stack::pop(){
    if(empty()) return -1;
    else{
        int* newStack;
	    int top = stack[topIndex];
        newStack = new int[capacity];
        for(int i = 0; i < topIndex; i++) newStack[i] = stack[i];
        stack = newStack;
        topIndex--;
	    return top;
    }
}

int Stack::size(){
    return topIndex;
}

int& Stack::top(){
    return stack[topIndex];
}

int main(){
    int num, val;
    string str;
    cin >> num;
    Stack s(num);
    for(int i  = 0; i < num; i++){
        cin >> str;
        if(str == "push"){
            cin >> val;
            s.push(val);
        }
        else if(str == "top"){
            cout << s.top() << endl;
        }
        else if(str == "size"){
            cout << s.size() << endl;
        }
        else if(str == "empty"){
            cout << s.empty() << endl;
        }
        else if(str == "pop"){
            cout << s.pop() << endl;
        }
    }
    return 0;
}