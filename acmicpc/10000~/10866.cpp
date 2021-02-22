#include <iostream>
#include <string>
using namespace std;
class Deque{
    private:
        int s;
        int array[10000];
    public:
        Deque(){s=0;}
        void push_front(int input);
        void push_back(int input);
        void pop_front();
        void pop_back();
        void size();
        bool empty();
        void front();
        void back();
};

void Deque::push_front(int input){
    for(int i = 0; i < s; i++) array[s-i] = array[s-i-1];
    array[0] = input;
    s++;
}

void Deque::push_back(int input){
    array[s] = input;
    s++;
}

void Deque::pop_front(){
    if(empty()) cout << -1 << '\n';
    else{
        s--;
        cout << array[0] << '\n';
        for(int i = 0; i < s; i++) array[i] = array[i+1];
    }
}

void Deque::pop_back(){
    if(empty()) cout << -1 << '\n';
    else{
        s--;
        cout << array[s] << '\n';
    }
}

void Deque::size(){
    cout << s << '\n';
}

bool Deque::empty(){
    return s==0;
}

void Deque::front(){
    if(empty()) cout << -1 << '\n';
    else cout << array[0] << '\n';
}

void Deque::back(){
    if(empty()) cout << -1 << '\n';
    else cout << array[s-1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    Deque dq;
    for(int i = 0; i < test; i++){
        string order;
        cin >> order;
        if(order == "push_front"){
            int input;
            cin >> input;
            dq.push_front(input);
        }
        else if(order == "push_back"){
            int input;
            cin >> input;
            dq.push_back(input);
        }
        else if(order == "pop_front") dq.pop_front();
        else if(order == "pop_back") dq.pop_back();
        else if(order == "size") dq.size();
        else if(order == "empty") cout << dq.empty() << '\n';
        else if(order == "front") dq.front();
        else dq.back();
    }
    return 0;
}