#include <bits/stdc++.h>
using namespace std;

int main(){

   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   //phan b
   int b[4] = {1,2,3,4};
   for (int i = 0; i <= 3; i++){
      cout << &b[i] << '\n';
   } 

   //phan c
   double c[4] = {0.1,2.1,4.1,6.4};
   for (int i = 0; i <= 3; i++){
      cout << &c[i] << '\n';
   }
   
   //phan d
   char d[4] = "abc"; 
   for (char *cp = d; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
