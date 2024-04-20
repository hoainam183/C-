#include<bits/stdc++.h>
using namespace std;
long long i,j,n,d=0,s,x;
int nt[100000];
int cs(int x)
{
    int kq=0;
    while(x>0)
    {
        kq=kq+x%10;
        x=x/10;
    }
    return kq;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SODB.inp","r",stdin);
    freopen("SODB.out","w",stdout);
    cin>>n;
    x=n;
    while(d==0)
    {
        x++;
        n=x;
        s=0;
        for(i=2;i<=sqrt(x);i++)
        {
            while(n%i==0&&n!=1)
            {
                s=s+cs(i);
                n=n/i;
                if(s>cs(x)) break;
            }
        }
        s=s+cs(n);
        if(s==cs(x)) {cout<<x;return 0;}
    }
}
