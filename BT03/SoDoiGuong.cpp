#include <bits/stdc++.h>
using namespace std;
bool test(int n){
    vector<int>ar;
    while(n>0){
        ar.push_back(n%10);
        n/=10;
    }
    bool res=true;int k=ar.size();
    for (int i=0; i<k;i++){
        if (ar[i]!=ar[k-1-i]) res=false;
    }
    return res;
}
int main(){
    int a,b;
    int n;
    cin >> n;
    for (int j=0; j<n;j++){
    cin >> a>>b;
    int count=0;
    for (int i=a;i<=b;i++)
    {
        if (test(i)==true) count++;
    }
    cout << count<<endl;}
    return 0;
}
