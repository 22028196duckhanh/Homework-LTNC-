#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=8;
	int arr[n] = {7,4,3,8,1,5,4,2};
	int i,tmp;
	int count=0; //dem so lan so sanh
	for (int j=1; j<n;j++){
		i=0;
		while (arr[j]> arr[i]) {i++;count++;}
		count++; //thoat vong lap
		tmp = arr[j];
		for (int k=0; k<j-i;k++){
			arr[j-k] = arr[j-k-1];
		}
		arr[i] = tmp;
	}
	//print
	for (int i=0; i<n;i++){
		cout << arr[i] <<" ";
	}
	cout << endl <<"so phep so sanh dung boi sap xep chen: " << count;
	return 0;
}
