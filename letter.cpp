#include<bits/stdc++.h>
using namespace std;
void fre()
{
    freopen("letter.inp","r",stdin);
    freopen("letter.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
map<char,short> f;
string s,t;
int i,d;
int main()
{
    fre();
    cin>>s>>t;
    for(i=0;i<s.size();i++)f[s[i]]=s.size()-i;
    i=0;
    while(i<t.size())
    {
        if(f[t[i]]>f[t[i+1]]){
                while(f[t[i]]>f[t[i+1]])i++;
                i++;
        }
        else i++;
        d++;
    }
    cout<<d;
}
