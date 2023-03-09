#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
void hadamard(int x1,int y1,int x2,int y2){
	if (x1==x2 && y1==y2) {
		if (arr[x1][y1]==0) arr[x1][y1]=1;
			else arr[x1][y1]=0;
		return;
	}
	for (int i=y1+(y2-y1+1)/2;i<=y2;i++){
		for (int j= x1+(x2-x1+1)/2;j<=x2;j++){
			if (arr[i][j]==0) arr[i][j]=1;
			else arr[i][j]=0;
		}
	}
	hadamard(x1,y1,x1+ (x2-x1+1)/2 -1 , y1 + (y2-y1+1)/2 -1);
	hadamard(x1 + (x2-x1+1)/2,y1,x2 , y1 + (y2-y1+1)/2 -1);
	hadamard(x1,y1 + (y2-y1+1)/2,x1+ (x2-x1+1)/2 -1 ,y2);
	hadamard(x1 + (x2-x1+1)/2,y1 + (y2-y1+1)/2, x2 ,y2);
}
int main(){
	int n;
	cin >> n; //n<7
	int s= pow(2,n);
	hadamard(0,0,s-1,s-1);
	for (int i=0; i<s;i++){
		for (int j=0; j<s;j++){
			if (arr[i][j]==1) cout <<'.';
			else cout <<'o';
		}
		cout << endl;
	}
	return 0;
}
