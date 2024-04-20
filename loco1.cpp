#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
struct matrix
{
    ll m[3][3];
    matrix()
    {
        m[0][0]=0;m[0][1]=1;m[0][2]=0;
        m[1][0]=0;m[1][1]=0;m[1][2]=1;
        m[2][0]=1;m[2][1]=1;m[2][2]=1;
    }
};
matrix x;
ll nhan(ll a,ll b,ll mod)
{
    if(b==0) return 0;
    ll t=nhan(a,b/2,mod);
    if(b%2==0) return (t+t)%mod;
    return ((t+t)%mod+a)%mod;
}
matrix mnhan(matrix a,matrix b,ll mod)
{
    matrix kq;
    ll u,v,w;
    f(u,0,2)
    {
        f(v,0,2)
        {
            kq.m[u][v]=0;
            f(w,0,2)
            {
                kq.m[u][v]=(kq.m[u][v]+nhan(a.m[u][w],b.m[w][v],mod))%mod;
            }
        }
    }
    return kq;
}
matrix mmu(matrix a,ll b,ll mod)
{
    if(b==1) return a;
    matrix t=mmu(a,b/2,mod);
    if(b%2==0) return mnhan(t,t,mod);
    return mnhan(mnhan(t,t,mod),a,mod);
}
ll n,k;
int main()
{
    freopen("loco.inp","r",stdin);
    freopen("loco.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    x=mmu(x,n,k);
    ll i,j;
    f(i,0,2)
    {
        f(j,0,2) cout<<x.m[i][j]<<' ';
        cout<<endl;
    }
    cout<<x.m[2][2];
    return 0;
}
