#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if (b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int a,b;
	cin >> a>>b;
	int res=gcd(a,b);
	if (res==1) cout << "Hai so nguyen to cung nhau.";
	else cout <<"Uoc chung lon nhat cua 2 so la: " << res;
	return 0;
}
