#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
const ll ma=1e7;
ll i,j,k,d,a[10000005],st;
bool f[10000005];
bool nt(ll x)
{
    if(x<2) return false;
    if(x%2==0) return false;
    if(x%3==0) return false;
    ll u;
    for(u=6;u<=sqrt(x);u+=6)
    {
        if(x%(u-1)==0) return false;
        if(x%(u+1)==0) return false;
    }
    return true;
}
ll ghep(ll a,ll b)
{
    ll c=b,d=0;
    while(c>0)
    {
        c/=10;
        d++;
    }
    ll v;
    f(v,1,d) a*=10;
    return a+b;
}
int main()
{
    freopen("mprime.inp","r",stdin);
    freopen("mprime.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //clock_t start=clock();
    f[0]=f[1]=1;
    f(i,2,sqrt(ma))
    {
        if(f[i]==0)
        {
            for(j=i*i;j<=ma;j+=i) f[j]=1;
        }
    }
    f(i,1,ma) if(f[i]==0) {a[++st]=i;}
    cin>>k;
    for(i=1;i<=st;i+=2)
    {
        ll m=ghep(a[i],a[i+1]);
        if(m<=ma)
        {
            if(f[m]==0) k--;
        }
        else
        {
            if(nt(m)) k--;
        }
        if(k==0)
        {
            cout<<m;
            //clock_t ed=clock();
            //cout<<endl<<(float)(ed-start)/CLOCKS_PER_SEC;
            return 0;
        }
    }
}
