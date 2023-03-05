#include <bits/stdc++.h>
using namespace std;
void check(char arr[][1000],int posx,int posy,int w,int h,int &max){
	max = posy;
	if (posx>=w) return;
	if (posx==w-1) {
		if ((arr[posy][posx]=='R'&&arr[posy][posx-1]=='R')||(posy==h-1)) return;
	}
	else if (posx==0){
		if ((arr[posy][posx]=='R'&&arr[posy][posx+1]=='R')||(posy==h-1)) return;
	} 
	else{
		if ((arr[posy][posx]=='R'&&arr[posy][posx+1]=='R'&&arr[posy][posx-1]=='R')||(posy==h-1)) return;
	}
	if (arr[posy][posx]=='E') check(arr,posx,posy+1,w,h,max);
	if (posx!=w-1) if (arr[posy][posx+1]=='E') check(arr,posx+1,posy+1,w,h,max);
	if(posx!=0) if (arr[posy][posx-1]=='E') check(arr,posx-1,posy+1,w,h,max);
}
int main(){
	int w,h;
	cin >> w >> h;
	char arr[1000][1000];
	for (int i = 0; i<h;i++){
		for (int j=0;j<w;j++){
			cin >> arr[i][j];
		}
	}
	int pos,max=10;
	for (int i=0;i<w;i++){
		if (arr[0][i]=='Y') {
			pos = i;
			break;
		}
	}
	check(arr,pos,0,w,h,max);
	cout << max;
//	if (max==h-1) {
//	cout << "YES";
//	}
//	else cout << "NO";
	return 0;
}
