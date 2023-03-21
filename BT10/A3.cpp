#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x;
	double y;
	Point(int a, int b){
		x=a;y=b;
	}
};
Point mid_point(const Point& A,const Point& B){
	Point a(0,0);
	a.x = (A.x+B.x)/2;
	a.y = (A.y+B.y)/2;
	return a;
}
int main(){
	Point M(5,4),N(7,6);
	cout << mid_point(M,N).x<<' '<<mid_point(M,N).y;
	return 0;
}
