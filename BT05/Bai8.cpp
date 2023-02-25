#include <bits/stdc++.h>
using namespace std;
int rnd(double a){
	if ((int)(a*100) %100 >= 50) return ceil(a);
	return floor(a);
}
int rnd2(double a){
	if ((int)(a*100) %100 >= 50) return (int)a +1;
	return (int)a;
}
int main(){
    double n;
    cin >> n;
    cout << rnd(n)<<endl;
    cout << rnd2(n);
    return 0;
}

