#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
ll n,u,a[1000005];
void quicksort(ll l,ll r)
{
    ll i=l,j=r;
    ll mid=a[(l+r)/2];
    while(i<=j)
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            if(i!=j) cout<<i<<' '<<j<<endl;
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(l<j) quicksort(l,j);
    if(i<r) quicksort(i,r);
}
int main()
{
    freopen("queue.inp","r",stdin);
    freopen("queue.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    f(u,1,n) cin>>a[u];
    quicksort(1,n);
}
