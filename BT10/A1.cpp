#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x;
	double y;
	Point(int a, int b){
		x=a;y=b;
	}
};
void print(Point A){
	cout <<'('<< A.x <<' '<<A.y<<')';
	
}
int main(){
	Point M(5,4);
	print(M);
	return 0;
}
