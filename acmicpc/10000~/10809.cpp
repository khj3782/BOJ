#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    int l = a.length();
    int array[26];
    for(int i = 0; i < 26; i++) array[i] = -1;
    for(int i = 0; i < l; i++){
        if(array[a[i]-97] < 0) array[a[i]-97] = i;
    }
    for(int i = 0; i < 26; i++) cout << array[i] << " ";
    cout << "\n";
    return 0;
}