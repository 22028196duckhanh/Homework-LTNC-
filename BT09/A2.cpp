#include <bits/stdc++.h>
using namespace std;
int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;
    cout << *p2;
    delete p2;  // lỗi ở đây vì lệnh delete phải xóa 1 con trỏ được cấp phát động new mà p2 thì không phải nên hành vi này là không xác định

    return 0;
}
