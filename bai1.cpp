#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
const ll mod=1e9+7;
ll n,i,f[1000005],j,ti=1;
ll mu(ll a,ll b)
{
    if(b==0) return 1;
    ll t=mu(a,b/2)%mod;
    if(b%2==0) return (t*t)%mod;
    return ((t*t)%mod*a)%mod;
}
int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    f(i,1,n)
    {
        ll x=i;
        f(j,2,sqrt(x))
        {
            if(x%j==0)
            {
                while(x%j==0)
                {
                    f[j]++;
                    x/=j;
                }
            }
        }
        if(x!=1) f[x]++;
    }
    //cout<<f[2]<<endl;
    f(i,1,n)
    {

        if(f[i]%2==0) ti=(ti%mod)*mu(i,f[i])%mod;
        else ti=(ti%mod)*mu(i,f[i]-1)%mod;
        //if(f[i]!=0) cout<<i<<' '<<f[i]<<' '<<ti<<endl;
    }
    cout<<ti;
    return 0;
}
