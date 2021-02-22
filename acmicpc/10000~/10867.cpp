#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int num;
    vector<int> v, w;
    w.push_back(0);
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int input;
        scanf("%d", &input);
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(w.back() != v[i]) w.push_back(v[i]);
    }
    for(int i = 1; i < w.size(); i++) printf("%d ", w[i]);
    printf("\n");
    return 0;
}