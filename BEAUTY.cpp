#include<bits/stdc++.h>
using namespace std;
int i,j,n,d=0;
int a[1000005],nt[100000];
int kt(int x)
{
    int t=0;
    while(x>0)
    {
        t=t+(x%10)*(x%10);
        x=x/10;
    }
    return t;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1.inp","r",stdin);
    //freopen("BEAUTY.out","w",stdout);
    nt[0]=1;
    nt[1]=1;
    for(i=2;i<=1000;i++)
    {
        if(nt[i]==0)
        {
            for(j=2;j*i<=1000;j++) nt[i*j]=1;
        }
    }
    i=1;
    j=1;
    while(i<=1e6)
    {
        if(nt[kt(j)]==0)
        {
            a[i]=j;
            i++;
        }
        j++;
    }
    while(cin>>n) cout<<a[n]<<endl;
}
