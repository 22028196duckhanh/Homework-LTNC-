#include <bits/stdc++.h>
using namespace std;
void swap_pointers(char* &x, char* &y)
{
   char *tmp = x;
   x = y;
   y = tmp;
}
int main(){
	
   char **s; 
   char foo[] = "Hello World"; 
   char *tmp = foo;
   s = &tmp;
   printf("s is %s\n",*s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 

   return 0;

}

