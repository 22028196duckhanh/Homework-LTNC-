#include <bits/stdc++.h>
using namespace std;
void f(int arr[]){
	cout << arr << endl;
	cout << &arr[0];
}
int main(){
	int arr[10];
	cout << arr << endl;
	cout << &arr[0] << endl;
	f(arr);
	return 0;
}
/* Nhan xet: Ket qua o ham main va ham f in ra la giong nhau
			Mang duoc truyen vao ham theo dia chi cua mang cung chinh la dia chi cua phan tu dau tien cua mang
		--> Ham co the thay doi duoc cac gia tri trong mang  */
