#include <bits/stdc++.h>
using namespace std;
long long solve(vector<vector<int>> steps) {
    long long n,mnx=steps[0][0],mny=steps[0][1];
    n=steps.size();
    for (int i=1; i<n;i++){
        if(steps[i][0]<mnx)mnx=steps[i][0];
        if(steps[i][1]<mny)mny=steps[i][1];
    }
    return mnx*mny;
}
int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(n);
	for (int i=0;i<n;i++){
		a[i].resize(2);
		cin >> a[i][0] >> a[i][1];
	}
	cout << solve(a);
	return 0;
}
