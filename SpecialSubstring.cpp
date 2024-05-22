#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,tmp="",ans="";
    set<char> se;
    map<char,int> mp;
    int k;
    cin>>s>>k;
    int n=s.length();
    int l=0,r=0;
    while(r<n){
        // mp[s[r]]++;
        if(se.size()>k){
            l++;
            mp[s[l]]--;
            if(mp[s[l]]==0) se.erase(s[l]);
            tmp = tmp.erase(0,1);
        }
        else{
            if(tmp.length()%2==0){
                if(ans.length()<tmp.length()) ans=tmp;
            }
            mp[s[r]]++;
            tmp=tmp+s[r];
            se.insert(s[r]);
            r++;
        }
    }
    cout<<ans;
    return 0;
}
