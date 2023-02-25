#include <bits/stdc++.h>
using namespace std;
void draw(int m, int n){
    for (int i=0;i<m;i++){
        cout <<' ';
    }
    for (int j=0; j<n;j++){
        cout <<'*';
    }
    return;
}
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n;i++){
        draw(n-1-i,2*i+1);
        cout <<endl;
    }
    return 0;
}

