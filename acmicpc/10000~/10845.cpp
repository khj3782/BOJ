#include <iostream>
#include <string>
using namespace std;

class Queue{
    private:
        int* queue;
        int front;
        int back;
        int capacity;
    public:
        Queue(int cap);
        void push(const int& value);
        bool empty();
        int pop();
        int size();
        int getFront();
        int getBack();
};

Queue::Queue(int cap){
    capacity = cap;
    queue = new int[capacity+1];
    queue[0] = -1;
    front = 0;
    back = 0;
}

void Queue::push(const int& value){
    if(back == capacity-1){
        int* newQueue;
        newQueue = new int[capacity*2];
        for(int i = 0; i <= capacity; i++) newQueue[i] = queue[i];
        queue = newQueue;
        back++;
        capacity *= 2;
        queue[back] = value;
    }
    else{
        back++;
        queue[back] = value;
    }
}

bool Queue::empty(){
    return front==back;
}

int Queue::pop(){
    if(empty()) return -1;
    else{
        int* newQueue;
        int temp = queue[front+1];
        newQueue = new int[capacity];
        newQueue[0] = -1;
        for(int i = 2; i <= back; i++) newQueue[i-1] = queue[i];
        queue = newQueue;
        back--;
	    return temp;
    }
}

int Queue::size(){
    return back;
}

int Queue::getFront(){
    if(empty()) return -1;
    return queue[front+1];
}

int Queue::getBack(){
    if(empty()) return -1;
    return queue[back];
}

int main(){
    int num, val;
    string str;
    cin >> num;
    Queue q(num);
    for(int i  = 0; i < num; i++){
        cin >> str;
        if(str == "push"){
            cin >> val;
            q.push(val);
        }
        else if(str == "front"){
            cout << q.getFront() << endl;
        }
        else if(str == "back"){
            cout << q.getBack() << endl;
        }
        else if(str == "size"){
            cout << q.size() << endl;
        }
        else if(str == "empty"){
            cout << q.empty() << endl;
        }
        else if(str == "pop"){
            cout << q.pop() << endl;
        }
    }
    return 0;
}