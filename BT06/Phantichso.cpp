#include <bits/stdc++.h>
using namespace std;
vector<int> res;
void phantich(int cur,int prev){
	if (cur < 0) return;
	if (cur==0){
		for (auto x : res){
			cout << x <<" ";
		}
		cout << endl;
		return;
	}
	
	for (int i = prev;i>=1;i--){
		res.push_back(i);
		phantich(cur-i,i);
		res.erase(res.end()-1);
	}
}
int main(){
	int n;
	cin >> n;
	phantich(n,n);
	return 0;
}
