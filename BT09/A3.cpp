#include <bits/stdc++.h>
using namespace std;
int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // lỗi ở đây vì c không được cấp phát động nên lệnh delete ở đây là không xác định -> bug
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // lệnh cerr này không chạy như mong muốn

    return 0;
}
