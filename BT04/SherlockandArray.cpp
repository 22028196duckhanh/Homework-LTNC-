#include <bits/stdc++.h>
using namespace std;
void test(int n,int ar[]){
    if (n==1) {cout<<"YES";return;}
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=ar[i];
    }
    int i=0,tmp=0;
    bool exist=false;;
    while(2*tmp<= (sum-ar[i])){
        if (2*tmp==(sum-ar[i])) exist = true;
        tmp+=ar[i];
        i++;
    }
    if (exist) cout << "YES"<<endl;
    else cout << "NO"<<endl;
}
int main(){
    int n;
    cin >> n;
    int len;
    for (int i=0;i<n;i++){
        cin >> len;
        int ar[len];
        for (int j=0; j<len;j++){
            cin >> ar[j];
        }
        test(len,ar);
    }
    return 0;
}
