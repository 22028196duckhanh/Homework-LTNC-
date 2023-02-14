#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int j=(n-1)/2,i=0;
    for (int k=1;k<=n*n;k++){
        arr[i][j]=k;
        if (k%n==0) {i++;continue;}
        if(j+1==n) j-=n;
        if (i-1==-1) i+=n;
        j++;i--;
    }
    for ( i=0; i<n; i++){
        for ( j=0; j<n;j++){
            cout << arr[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}
