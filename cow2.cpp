#include<bits/stdc++.h>
using namespace std;
void fre()
{
    freopen("cow.inp","r",stdin);
    freopen("cow.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int mc=25;
int a[mc],b[mc],c[mc],n,i,k,j,dem;
unsigned long long kq=1;
long long f[mc];
int main()
{
    fre();
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)if(a[j]<=b[i])f[i]++;
    k=0;
    for(i=1;i<=n;i++)
    {
        kq*=(f[i]-k);
        k++;
    }
    cout<<kq;

}
