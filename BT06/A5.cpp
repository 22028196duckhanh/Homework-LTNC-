#include <bits/stdc++.h>
using namespace std;
long F(int n) { 
   if (n == 0) return 0; 
   if (n == 1) return 1; 
   return F(n-1) + F(n-2); 
}
int main(){
	int n;
	cin >> n;
	int arr[n+1];
	arr[0]=0;arr[1]=1;
	for (int i=2; i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout << arr[n];
	
	
	//cout << F(n);
	return 0;
}
