#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
ll n,k;
ll dequy(ll a,ll b)
{
    if(a<=b||(a+b)%2==1||(a-b)%2==1) return 1;
    return dequy((a-b)/2,b)+dequy((a+b)/2,b);
}
int main()
{
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    cout<<dequy(n,k);
}
