#include <bits/stdc++.h>
using namespace std;
string dectobin(int n){
	string res="";
	while (n>0){
		if (n%2==0) res="0"+res;
		else res = "1"+res;
		n/=2;
	}
	return res;
}
int bintodec(string n){
	int res=0;
	int len=n.length();
	for (int i=len-1;i>=0;i--){
		res=res+(n[i]-'0')*pow(2,len-1-i);
	}
	return res;
}
int main(){
	int n;
	cin >>n;
	cout << dectobin(n) <<endl << bintodec(dectobin(n));
	return 0;
}
