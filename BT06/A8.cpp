#include <bits/stdc++.h>
using namespace std;
void intohop(int k,int arr[],bool test[],int n){
	if (k<1) {
		cout <<'{';
		for (int i=1;i<=n;i++){
			if (test[i]==true) cout << arr[i] <<" ";
		}
		cout <<'}'<< endl;
		return;
	}
	test[k]=false;
	intohop(k-1,arr,test,n);
	test[k]=true;
	intohop(k-1,arr,test,n);
}
int main(){
	int n;
	cin >> n;
	int k=n;
	int arr[n+1];
	bool test[n+1];
	for (int i=1; i<=n;i++){
		arr[i]= i;
	}
	intohop(k,arr,test,n);
	return 0;
}
