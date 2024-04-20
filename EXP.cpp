#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

string s;
long long a,d,k,b=1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("EXP.inp","r",stdin);
    freopen("EXP.out","w",stdout);
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='0'&&s[i]<='9')||s[i]=='*')
        {
            if(s[i]=='*')
            {
                b*=d;
                b%=mod;
                d=0;
            }
            else{
                d=d*10%mod+s[i]-'0';
                d%=mod;
            }

        }
        if(s[i]=='+'||i==s.size()-1)
        {
            b*=d;b%=mod;d=0;
            a+=b;a%=mod;b=1;
        }
    }

    cout<<a%mod;
    return 0;
}
