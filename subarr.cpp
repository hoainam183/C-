#include<bits/stdc++.h>
using namespace std;
int i,j,n,a[1000000],s=0,d=0,t=0,x,t1;
int main ()
{
    freopen("1.inp","r",stdin);
    cin>>n;
    for(i=1;i<=n;i++) {cin>>a[i];s=s+a[i];}
    if(s%3!=0) {cout<<0;return 0;}
    else
    {
        s=s/3;
        for(i=1;i<=n-2;i++)
        {
            t=t+a[i];
            if(t==s)
            {
                t1=0;
                for(j=i+1;j<n;j++)
                {
                    t1=t1+a[j];
                    if(t1==s) d++;
                }
            }
        }
        cout<<d;
    }
}
