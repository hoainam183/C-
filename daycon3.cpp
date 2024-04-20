#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
ll n,i,a[1000005],d,ma;
bool kt(ll x)
{
    ll y=x,z=0;
    while(y>0)
    {
        z=z*10+y%10;
        y/=10;
    }
    if(__gcd(x,z)==1) return true;
    return false;
}
int main()
{
    freopen("daycon3.inp","r",stdin);
    freopen("daycon3.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    f(i,1,n)
    {
        cin>>a[i];
        if(kt(a[i])) d++;
        else d=0;
        ma=max(ma,d);
    }
    cout<<ma;
    return 0;
}
