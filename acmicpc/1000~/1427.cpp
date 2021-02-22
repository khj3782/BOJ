#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int orig, len;
    string origToString;
    scanf("%d", &orig);
    origToString = to_string(orig);
    len = origToString.length();
    vector<int> v;
    for(int i = 0; i < len; i++) v.push_back(stoi(origToString.substr(i, 1)));
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < len; i++) printf("%d", v[i]);
    printf("\n");
    return 0;
}