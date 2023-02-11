#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,sum=0, max=INT_MIN,min=INT_MAX;
    for (int i=0;i<n; i++){
		cin >> a;
		sum+= a;
		if (a>max) max =a;
		if (a<min) min = a;
	}
	cout << "Mean: " <<fixed <<setprecision(2) <<(double)sum / n << endl;
	cout << "Max: " <<max <<endl;
	cout <<"Min: " << min;
    return 0;
}
