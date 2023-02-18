#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    for (int i=0; i<n/2 +1;i++){
        if (s[i]!=s[n-1-i]) {cout << "No";return 0;}
    }
    cout << "Yes";
    return 0;
