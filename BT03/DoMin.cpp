#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int arr[a+2][b+2];char x;
    for (int i=1; i<=a;i++ ){
        for (int j=1; j<=b;j++){
            cin >>x;
            if (x=='*') arr[i][j]=-9;
            else arr[i][j]=0;
        }
    }
    for (int i=1; i<=a;i++ ){
        for (int j=1; j<=b;j++){
            if (arr[i][j]<0) {arr[i+1][j]++;arr[i+1][j+1]++;arr[i-1][j]++;arr[i-1][j+1]++;arr[i+1][j-1]++;arr[i-1][j-1]++;arr[i][j+1]++;arr[i][j-1]++;}
        }
    }
    for (int i=1; i<=a;i++ ){
        for (int j=1; j<=b;j++){
            if (arr[i][j]<0) cout <<"* ";
            else cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
