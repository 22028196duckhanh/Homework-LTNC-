#include <bits/stdc++.h>
using namespace std;
int* genNumbers(int N){
    int* arr = new int[N];
    for (int i=0;i<N;i++){
        arr[i]=rand()%50;
    }
    return arr;
}
void printNumbers(int *a, int N){
    sort(a,a+N);
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            for (int k=j+1;k<N;k++){
                if ((a[i]+a[j]+a[k])%25==0) cout << a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
        }
    }
}
int main(){ 
    srand(time(0));
    int n;
    cin >> n;
    int *a = genNumbers(n);
    
    printNumbers(a, n);
}
