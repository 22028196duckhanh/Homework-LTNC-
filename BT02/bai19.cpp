#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double heso=0,sum=0;
    double arr[n][2];
    for (int i=0; i<n; i++){
        cin >> arr[i][0]>>arr[i][1];
        if (arr[i][0]<0 || arr[i][1]>10) {cout << "Sai diem so";return 0;}
        if (arr[i][1]!=1 &&arr[i][1]!=1.5 &&arr[i][1]!=2 &&arr[i][1]!=2.5 &&arr[i][1]!=3){
            cout << "Sai he so";return 0;
        }
        heso+=arr[i][1];
        sum+=(arr[i][0]*arr[i][1]);
    }
    cout << "Tong so mon hoc can tinh DTB: "<<n<<endl;
    for (int i=0;i<n;i++){
        cout <<fixed<<setprecision(1)<< "Diem mon hoc "<<i<<": "<<arr[i][0]<<endl;
        cout <<fixed<<setprecision(1)<< "He so mon hoc "<<i<<": "<<arr[i][1]<<endl;
    }
    cout <<fixed<<setprecision(1)<<"Tong so he so: "<<heso<<endl;
    cout <<fixed<<setprecision(1)<<"Diem trung binh cua "<<n<<" mon hoc: "<<sum/heso;
    return 0;
}
