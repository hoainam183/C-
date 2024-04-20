#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,t,s=1,ma,d;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1.inp","r",stdin);
    //freopen("uocso.out","w",stdout);
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        ma=max(m,n);
        s=1;
        for(j=2;j<=sqrt(ma);j++)
        {
            d=0;
            while(m%j==0)
            {
                m=m/j;
                d++;
            }
            while(n%j==0)
            {
                n=n/j;
                d++;
            }
            s=s*(d+1);
            //ma=max(n,m);
        }
        //cout<<m<<" "<<n<<endl;
        if(m!=1) s=s*2;
        if(n!=1) s=s*2;
        cout<<s<<endl;
    }
}
