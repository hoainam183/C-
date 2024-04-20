#include<bits/stdc++.h>
using namespace std;

long long ans=0;
int n;

int main()
{
    freopen("SUM.inp","r",stdin);
    freopen("SUM.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans+=n/i;
    }

    cout<<ans;
    return 0;
}
