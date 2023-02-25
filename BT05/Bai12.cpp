#include <bits/stdc++.h>
using namespace std;
int toHop(int k,int n){
	int res=1;
	for (int i=1; i<=k;i++,n--){
		res=(res*n)/i;
	}
	return res;
}
int kiemTra(int k, int n){
	if (0<=k && k<=n&&n>=1 && n<=20) return 1;
	else return 0;
}
void nhapKN(int k[], int n[], int &soPhanTu){
	cin >> k[soPhanTu ] >>n[soPhanTu];
	while (k[soPhanTu]!=-1 ||n[soPhanTu]!=-1){
		cin >> k[soPhanTu + 1] >>n[soPhanTu +1];
		soPhanTu++;
	}
	soPhanTu++;
}
int main(){
	int k[1000],n[1000];
	int count=0;
	nhapKN(k,n,count);
	for (int i=0; i<count;i++){
		if (kiemTra(k[i],n[i])==1) cout << toHop(k[i],n[i])<<endl;
	}
	return 0;
}
