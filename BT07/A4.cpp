#include <bits/stdc++.h>
using namespace std;
int binary_search(int *arr,int l,int h,int key){
	if (l>h) return -1;
	int mid = (l+h)/2;
	if (*(arr+mid)==key) return mid;
	if (*(arr+mid)>key) return binary_search(arr,l,mid-1,key);
	return binary_search(arr,mid+1,h,key);
}
int main(){
	int arr[10]= {1,4,7,12,13,15,17,21,22,24};
	cout << binary_search(arr,0,9,17);
	return 0;
}
