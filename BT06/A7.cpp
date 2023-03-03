#include <bits/stdc++.h>
using namespace std;
void permutation(string s,int low,int high){
	if (low==high) {cout <<s<<endl;return;}
	for (int i=low; i<=high;i++){
		swap(s[low],s[i]);
		permutation(s,low+1,high);
		swap(s[low],s[i]);
	}
}
int main(){
	string s;
	cin >> s;
	int n= s.length();
	permutation(s,0,n-1);
	return 0;
}
