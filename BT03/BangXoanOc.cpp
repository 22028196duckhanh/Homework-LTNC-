#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=1;
    cin >> a >> b;
    int arr[a][b];
    int r1=0,r2=a-1,c1=0,c2=b-1;
    while (r1<=r2 && c1<=c2){
        for (int i=c1;i<=c2;i++){
            arr[r1][i]=count;
            count++;
        }
        if (count>a*b) break;
        r1++;
        for (int i=r1;i<=r2;i++){
            arr[i][c2]=count;
            count++;
        }
        if (count>a*b) break;
        c2--;
        for (int i=c2;i>=c1;i--){
            arr[r2][i]=count;
            count++;
        }
        if (count>a*b) break;
        r2--;
        for (int i=r2;i>=r1;i--){
            arr[i][c1] = count;
            count++;
        }
        c1++;
        if (count>a*b) break;
    }
    for (int i=0; i<a;i++){
        for (int j=0;j<b;j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
