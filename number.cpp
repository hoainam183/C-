#include<bits/stdc++.h>
using namespace std;
int i,j,n,a[1000000],d=0,x;
vector <int> m;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    a[1]=1;
    a[0]=1;
    for(i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(j=2;i*j<=1000000;j++) a[i*j]=1;
        }
    }
    while(cin>>x)
    {
        m.push_back(x);
    }
    n=m.size();
    for(i=n-2;i>=1;i--)
    {
        if(m[i-1]>=2)
            if(m[i+1]>=2)
            if(a[m[i+1]]==0)
        if(a[m[i-1]]==0) {cout<<i+1;return 0;}
    }
    cout<<0;
}
