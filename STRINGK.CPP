#include<bits/stdc++.h>
using namespace std;
void fre()
{
    freopen("stringk.inp","r",stdin);
    freopen("stringk.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool g[100];
map<string,short> f;
int i,n,j;
string t,s;
int main()
{
    fre();
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        t="";
        for(j=i;j<n;j++)
        {
            t+=s[j];
            f[t]++;
            if(f[t]>=2)g[t.size()]=1;
        }
    }
    for(i=1;i<=n;i++)if(g[i]==0)
    {
        cout<<i;return 0;
    }
}
