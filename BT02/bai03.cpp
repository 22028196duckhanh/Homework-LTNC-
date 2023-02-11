#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=0;i>=1-n;i--){
        for (int j=1-n;j<=n-1;j++){
            if (i<=j && i<=-j) cout <<"*";
            else cout <<" ";
        }
        cout << endl;
    }
    return 0;
}
