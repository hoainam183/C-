#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,ma = 0,d=0,i1,i,j,u;
    string s;
    cin>>s>>k;
    // s=s+"@";
    int k1 = k;
    bool check = true;
    int n = s.length();
    for(i=0;i<n;i++){
        char tmp = s[i];
        for(j=i+1;j<n;j++){
            if(s[j]!=tmp) {
                k--;
                if(check == true) i1 = j-1;
                check = false;
                if(k==-1){
                    ma = max(ma,j-i);
                    break;
                }
            }
        }
        if(j==n){
            ma = max(ma,n-i+min(i,k));
            if(check == true) {
                cout<<ma;
                return 0;
            }
        }
        k=k1;
        check = true;
        i=i1;
    }
    cout<<ma;
}