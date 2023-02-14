#include <bits/stdc++.h>
using namespace std;
int main(){
    double mn , mx , step;
    cin >> mn >> mx >> step;
    for (double i=mn ; i<= mx ;i+=step){
        cout << fixed << setprecision(2) << i << " " << (i-32)*5/9 << " " <<(i-32)*5/9 + 273.15 <<endl;
    }
    return 0;
}
