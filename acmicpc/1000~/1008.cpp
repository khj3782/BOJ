#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a;
    double b;
    cin >> a >> b;
    cout << fixed << setprecision(10) << a/b << "\n";
    return 0;
}