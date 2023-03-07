#include <bits/stdc++.h>
using namespace std;
void f(int arr[]){
	cout << sizeof(arr)<<endl;
}
int main(){
	int A[100];
	int *B = new int[1000];
	cout << sizeof(A)<<endl;
	f(A);
	f(B);
	return 0;
}
