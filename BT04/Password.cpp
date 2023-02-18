#include <bits/stdc++.h>
using namespace std;
bool test(string s1, string s2){
    int len1=s1.length(),len2=s2.length();
    if (len1!=len2) return false;
    for (int i=0;i<len1/2+1;i++){
        if (s1[i]!=s2[len1-1-i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string s[n];
    for (int i=0; i<n;i++){
        cin >> s[i];
    }
    for (int i=0; i<n;i++){
        for (int j=i+1;j<n;j++){
            if (test(s[i],s[j])==true){
                int k=s[i].length();
                cout <<k <<" "<< s[i][(k-1)/2];return 0;
            }
        }
    }
    return 0;
}
