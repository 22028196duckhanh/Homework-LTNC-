#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n ;
    int A[n],B[n+1];
    int tmp;
    for (int i=0; i<n;i++){
        cin >> A[i];
    }
    for (int i=0; i<=n;i++){
        cin >> B[i];
    }
    for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (A[j]<A[i]) {tmp=A[j];A[j]=A[i];A[i]=tmp;}
		}
	}
	for (int i=0;i<n+1;i++){
		for (int j=i+1;j<n+1;j++){
			if (B[j]<B[i]) {tmp=B[j];B[j]=B[i];B[i]=tmp;}
		}
	}
    for (int i=0; i<n;i++){
        if (B[i]!=A[i]) {cout << B[i];return 0;}
    }
    cout << B[n];
    return 0;
}
