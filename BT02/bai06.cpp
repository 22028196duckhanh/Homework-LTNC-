#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=i+n;j++){
            if (j%(n+1)==0) continue;
            cout << j%(n+1) << " ";
        }
        cout << endl;
    }
    return 0;
}
