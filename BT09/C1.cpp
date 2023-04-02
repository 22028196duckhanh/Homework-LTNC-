#include <bits/stdc++.h>
using namespace std;
int get_len(const char a[]){
	int cnt =0;
	while (a[cnt]!='\0') cnt++;
	return cnt;
}

void swap(const char a[],int i,int j){
    char* aa = new char;
    aa = a;
	char tmp = aa[i];
	aa[i] =aa[j];
	aa[j] =tmp;
	cout << aa << endl;
	delete aa;
}

void del(const char a[],int pos){
	int len = get_len(a);
	char* aa = new char;
	aa = a;
	while (aa[pos]!='\0'){
		aa[pos] = aa[pos+1];
		pos++;
	}
	aa[len-1] ='\0';
	cout << aa << endl;
	delete aa;
}
//
void reverse(const char a[]){
    char* aa = new char;
    aa = a;
	int len = get_len(a);
	for (int i=0; i<len/2+1;i++){
		swap(aa,i,len-1-i);
	}
	cout << aa << endl;
	delete aa;
}
//
void delete_char(const char a[], char c){
	int len = get_len(a);
	char* aa = new char;
	aa = a;
	for (int i=0; i<len;i++){
		if (aa[i]==c) {
			del(aa,i);
			i--;
		}
	}
	cout << aa << endl;
	delete aa;
}
//
void pad_right(const char a[],int n){
	int len = get_len(a);
	char* aa = new char;
	aa = a;
	for (int i= len;i<n;i++){
		aa[i]=' ';
	}
	aa[n]='\0';
	cout << aa << endl;
	delete aa;
}
//
void pad_left(const char a[],int n){
	int len = get_len(a);
	char* aa = new char;
	aa = a;
	for (int i=n-1;i>=n-len;i--){
		aa[i] = aa[i-n+len];
	}
	for (int i=0;i<n-len;i++){
		aa[i] =' ';
	}
	aa[n]='\0';
	cout << aa << endl;
	delete aa;
}
//
void truncate(const char a[],int n){
	int i = n;
	char* aa = new char;
	aa = a;
	while(aa[i]!='\0'){
		del(aa,i);
	}
	cout << aa << endl;
	delete aa;
}
//
bool is_palindrome(const char a[]){
	int len = get_len(a);
	for (int i=0; i<len/2+1;i++){
		if (a[i] != a[len-1-i]) return false;
	}
	return true;
}
//
void trim_left(const char a[]){
    char* aa = new char;
    aa = a;
	while (aa[0]== ' ')
	del(aa,0);
	cout << aa << endl;
	delete aa;
}
//
void trim_right(const char a[]){
    char* aa = new char;
    aa = a;
	int tmp = get_len(a)-1;
	while (aa[tmp]==' '){
		tmp--;
	}
	tmp++;
	while (aa[tmp]!= '\0')
	del(aa,tmp);
	cout << aa << endl;
	delete aa;
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
