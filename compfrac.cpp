#include<bits/stdc++.h>
using namespace std;
void fre()
{
    freopen("compfrac.inp","r",stdin);
    freopen("compfrac.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
#define ull long long
ull a,b,c,d,x,y,z,T;
int main()
{
    fre();
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c>>x>>y>>z;
        d=abs(__gcd(a,c));
        a/=d;c/=d;
        d=abs(__gcd(b,c));
        b/=d;c/=d;
        d=abs(__gcd(x,z));
        x/=d;z/=d;
        d=abs(__gcd(y,z));
        y/=d;z/=d;
        //cout<<a<<' '<<b<<' '<<c<<' '<<x<<' '<<y<<' '<<z<<' ';
        if((a*b)*z>(x*y)*c)cout<<'>';
        else if((a*b)*z<(x*y)*c)cout<<'<';
        else cout<<'=';
        cout<<'\n';
    }
}
