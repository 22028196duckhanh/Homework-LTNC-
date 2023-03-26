#include <bits/stdc++.h>
using namespace std;
void f(int xval){
    int x;
    x = xval;
    cout << &x << '\n';
}

void g(int yval){
    int y;
    cout << &y << '\n';
}
int main(){
    f(7);
    g(11);
    return 0;
    
}
/* vi khi goi ham f thi bien dia phuong x trong ham f duoc lay mot vung va khi ham f ket thuc
thi chi bien x bien mat nen khi ham g duoc goi thi bien y lay luon dia chi cua no va ca hai 
ham f va g deu duoc goi tren dinh stack => cung dia chi*/

