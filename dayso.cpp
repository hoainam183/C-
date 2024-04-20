#include<bits/stdc++.h>
using namespace std;
long long i,j,d=0,n,x;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1.inp","r",stdin);
    //freopen("dayso.out","w",stdout);
    cin>>x;
    while(x!=0)
    {
        cin>>n;
        n=n%10;
        cout<<((n+1)*(n+1))%10<<endl;
        x--;
    }
}
