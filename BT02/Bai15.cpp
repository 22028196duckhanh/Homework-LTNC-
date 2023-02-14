#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin >> n;
    int i=1;
    bool test=false;
    while(fibo(i)<=n){
        i++;
        if (fibo(i)==n) test=true;
    }
    if (test==true) cout << "Thuoc day Fibonacci";
    else cout << "Khong thuoc day Fibonacci";
    cout << endl;
    for (int j=1; j<i;j++){
        cout << fibo(j) <<" ";
    }
    return 0;
}
