#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x;
	double y;
	Point(int a, int b){
		x=a;y=b;
	}
};
void print1(Point A){
	cout <<&A<<endl;
	
}
void print2(Point& A){
	cout <<&A<<endl;
	
}
int main(){
	Point M(5,4);
	cout << &M<<endl;
	print1(M);
	print2(M);
	return 0;
}
