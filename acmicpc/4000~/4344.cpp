#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double test, num;
    cin >> test;
    for(int i = 0; i < test; i++){
        double arr[1000];
        cin >> num;
        for(int j = 0; j < num; j++) cin >> arr[j];
        double sum = 0.0;
        double cnt = 0.0;
        double mid;
        for(int j = 0; j < num; j++) sum += arr[j];
        mid = sum / num;
        for(int j = 0; j < num; j++) {
            if(arr[j] > mid) cnt+=1.0;
        }
        cout << fixed << setprecision(3) << 100.0*(cnt/num) << "%" << '\n';
    }
    return 0;
}