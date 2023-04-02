#include <bits/stdc++.h>
using namespace std;
int get_len(const char a[]){
	int cnt =0;
	while (a[cnt]!='\0') cnt++;
	return cnt;
}
char* swap(const char a[],int i,int j){
    char* b = new char;
	int len = get_len(a);
	for (int k =0 ; k<len;k++){
		b[i] = a[i]
	}
	b[i] = a[j]; b[j] = a[i]
	return b;
}

char* del(const char a[],int pos){
	int len = get_len(a);
	char* b = new char;
	int j =0;
	for (int i=0;i<len;i++){
		if (i!= pos)
		b[j] = arr[i];
		else j--;
		j++;
	}
	b[len-1] ='\0';
	return b;
}
//
char* reverse(const char a[]){
    char* b = new char;
	int len = get_len(a);
	for (int i=0; i<len;i++){
		b[i]  = a[len-1-i];
	}
	return b;
}
//
char* delete_char(const char a[], char c){
	int len = get_len(a);
	char* b = new char;
	int j=0;
	for (int i=0; i<len;i++){
		if (a[i]!= c) {b[j] = a[i];j++;}
	}
	b[j] ='\0';
	return b;
}
//
char* pad_right(const char a[],int n){
	int len = get_len(a);
	char* b = new char;
	for (int i= 0;i<n;i++){
		if (i<n-len) b[i] =' ';
		else b[i] = a[i-n+len];
	}
	b[n]='\0';
	return b;
}
//
char* pad_left(const char a[],int n){
	int len = get_len(a);
	char* b = new char;
	for (int i= 0;i<n;i++){
		if (i>=len) b[i] =' ';
		else b[i] = a[i];
	}
	b[n]='\0';
	return b;
}
//
char* truncate(const char a[],int n){
	char* b = new char;
	for (int i=0; i<n;i++){
		b[i] = a[i];
	}
	b[n] = '\0';
	return b;
}
//
bool is_palindrome(const char a[]){
	int len = get_len(a);
	for (int i=0; i<len/2+1;i++){
		if (a[i] != a[len-1-i]) return false;
	}
	return true;
}
char* trim_left(const char a[]){
	int len =get_len(a);
    char* b = new char;
    int i=0;
	while(a[i]!=' ') i++;
	for(int j=i;j<len;j++){
		b[j-i] = a[j];
	}
	b[len-i] ='\0';
	return b;
}
//
char* trim_right(const char a[]){
    char* b = new char;
	int tmp = get_len(a)-1;
	while (a[tmp]==' '){
		tmp--;
	}
	tmp++;
	for(int i=0; i <tmp;i++){
		b[i] = a[i];
	}
	b[tmp]='\0';
	return b;
}
int main(){
	char a[] ="  abcdefggfedcba  ";
	char b[] ="  abcdefggfedcba  ";
	char c[] ="  abcdefggfedcba  ";
	char d[] ="  abcdefggfedcba  ";
	char e[] ="  abcdefggfedcba  ";
	char f[] ="  abcdefggfedcba  ";
	char g[] ="  abcdefggfedcba  ";

	cout<< reverse(a)<<endl;

   	cout<< delete_char(b, 'a')<<endl;

   	cout<< pad_right(c, 23)<<endl;

  	cout<< pad_left(d, 23)<<endl;

   	cout<< truncate(e,8)<<endl;

   	cout<< trim_right(f)<<endl;

   	cout<< trim_left(g)<<endl;

//	cout <<a<<endl<<get_len(a)<<endl;
//	cout <<b<<endl<<get_len(b)<<endl;
//	cout <<c<<endl<<get_len(c)<<endl;
//	cout <<d<<endl<<get_len(d)<<endl;
//	cout <<e<<endl<<get_len(e)<<endl;
//	cout <<f<<endl<<get_len(f)<<endl;
//	cout <<g<<endl<<get_len(g)<<endl;
	cout << is_palindrome(a);


	return 0;
}
