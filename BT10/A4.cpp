#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x;
	double y;
	Point(int a, int b){
		x=a;y=b;
	}
};
int main(){
	Point M(5,4);
	cout << &M<<endl;
	cout << &M.x <<' ' <<&M.y;
	return 0;
}

//Bien x co dia chi canh bien y trong struct
//Bien kieu Point co cung dia chi voi phan tu dau tien cua struct (la bien x)
