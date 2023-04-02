#include <bits/stdc++.h>
using namespace std;
int* test(){
    int n=5;
    int* a = new int;
    a = &n;
    return a;
}
int main(){
    delete test();
    return 0;
}
