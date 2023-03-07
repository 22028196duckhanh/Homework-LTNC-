#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	char a[1000],b[1000];
	cin >> a;
	cin >> b;
	int lena =strlen(a),lenb= strlen(b);
	if (lena>lenb) cout << 0;
	else if (lena==lenb &&strcmp(a,b)==0) cout << 1;
	else if (lena<lenb){
		bool x=true;
		int count=0;
		for (int i=0; i<lenb-lena+1;i++){
			if (b[i]==a[0]) {
				for (int j=i;j<i+lena&&j<lenb;j++){
					if (b[j]!=a[j-i]) {x=false;break;}
					else x=true;
				}
				if (x==true) count++;
			}	
		}
		cout << count;
	}
	return 0;
}
