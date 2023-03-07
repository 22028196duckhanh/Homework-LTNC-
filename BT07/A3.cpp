#include <bits/stdc++.h>
using namespace std;
int count_even(int* arr,int n){
	int count=0;
	for (int i=0; i<n;i++){
		if (arr[i]%2 == 0) count++;
	}
	return count;
}
int main(){
	int arr[12]= {4 ,5 ,3,4,6,7,2,4,7,24,13,436};
	cout << count_even(arr,5)<<endl;
	cout << count_even(arr+7,5)<<endl;
	return 0;
}
