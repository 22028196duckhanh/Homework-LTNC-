#include <bits/stdc++.h>
using namespace std;
int get_len(char a[]){
	int cnt =0;
	while (a[cnt]!='\0') cnt++;
	return cnt;
}

void swap(char a[],int i,int j){
	char tmp = a[i];
	a[i] =a[j];
	a[j] =tmp;
}

void del(char a[],int pos){
	int len = get_len(a);
	while (a[pos]!='\0'){
		a[pos] = a[pos+1];
		pos++;
	}
	a[len-1] ='\0';
}
//
void reverse(char a[]){
	int len = get_len(a);
	for (int i=0; i<len/2+1;i++){
		swap(a,i,len-1-i);
	}
}
//
void delete_char(char a[], char c){
	int len = get_len(a);
	for (int i=0; i<len;i++){
		if (a[i]==c) {
			del(a,i);
			i--;
		}
	}
}
//
void pad_right(char a[],int n){
	int len = get_len(a);
	for (int i= len;i<n;i++){
		a[i]=' ';
	}
	a[n]='\0';
}
//
void pad_left(char a[],int n){
	int len = get_len(a);
	for (int i=n-1;i>=n-len;i--){
		a[i] = a[i-n+len];
	}
	for (int i=0;i<n-len;i++){
		a[i] =' ';
	}
	a[n]='\0';
}
//
void truncate(char a[],int n){
	int i = n;
	while(a[i]!='\0'){
		del(a,i);
	}
}
//
bool is_palindrome(char a[]){
	int len = get_len(a);
	for (int i=0; i<len/2+1;i++){
		if (a[i] != a[len-1-i]) return false;
	}
	return true;
}
//
void trim_left(char a[]){
	while (a[0]== ' ')
	del(a,0);
}
//
void trim_right(char a[]){
	int tmp = get_len(a)-1;
	while (a[tmp]==' '){
		tmp--;
	}
	tmp++;
	while (a[tmp]!= '\0')
	del(a,tmp);
}
int main(){
	char a[] ="  abcdefggfedcba  ";
	char b[] ="  abcdefggfedcba  ";
	char c[] ="  abcdefggfedcba  ";
	char d[] ="  abcdefggfedcba  ";
	char e[] ="  abcdefggfedcba  ";
	char f[] ="  abcdefggfedcba  ";
	char g[] ="  abcdefggfedcba  ";
	
	reverse(a);

   	delete_char(b, 'a');

   	pad_right(c, 23);

  	pad_left(d, 23);

   	truncate(e,8);

   	trim_right(f);
   	
   	trim_left(g);
	  
	cout <<a<<endl<<get_len(a)<<endl;
	cout <<b<<endl<<get_len(b)<<endl;
	cout <<c<<endl<<get_len(c)<<endl;
	cout <<d<<endl<<get_len(d)<<endl;
	cout <<e<<endl<<get_len(e)<<endl;
	cout <<f<<endl<<get_len(f)<<endl;
	cout <<g<<endl<<get_len(g)<<endl;
	cout << is_palindrome(a);
	 	
	
	return 0;
}
