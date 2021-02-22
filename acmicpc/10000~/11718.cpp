#include <iostream>
#include <string>
using namespace std;
int main(){
    while(true){
        string temp;
        getline(cin, temp);
        if(temp!="") cout << temp << "\n";
        else break;
    }
    return 0;
}