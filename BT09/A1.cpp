#include <bits/stdc++.h>
using namespace std;
char* concat(const char* s1, const char* s2){
    int len = strlen(s1) + strlen(s2);
    char* s = new char[len];
    strcpy(s,s1);
    s = strcat(s,s2);
    return s;
}
int main(){
    char* s1 = "Hello";
    char* s2 = "World";
    char* s = concat(s1,s2);
    cout << s;
    return 0;
}
