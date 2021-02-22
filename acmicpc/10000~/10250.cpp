#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int h, w, n;
        cin >> h >> w >> n;
        int floor, room;
        if(n%h == 0) {
            floor = h;
            room = n/h;
        }
        else {
            floor = n%h;
            room = n/h + 1;
        }
        if(room < 10) cout << floor << 0 << room << '\n';
        else cout << floor << room << '\n';
    }
    return 0;
}