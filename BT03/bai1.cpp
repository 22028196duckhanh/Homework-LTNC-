#include <bits/stdc++.h>
using namespace std;
int main(){
    int tmp;char c;
    double sum=0;double avrg,vari;
    vector<int>ar;
    for(;;){
        cin >> tmp;if(!cin.good()) break;
        cin >>c;
        
        ar.push_back(tmp);
    }
    int len=ar.size();
    for (int i=0; i<len;i++){
        sum+=ar[i];
    }
    avrg = sum/len;
    for (int i=0; i<len;i++){
        vari+=((ar[i]-avrg)*(ar[i]-avrg));
    }
    vari/=len;
    cout << avrg <<endl;
    cout << fixed <<setprecision(2)<< vari;
    return 0;
}
