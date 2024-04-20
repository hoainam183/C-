#include<bits/stdc++.h>
using namespace std;

int q;
string s;

bool sol(string s)
{
    for(int i=0;i<s.size();i++)
    {
        int k=0,u=0,v=i-1;
        while(u<v)
        {
            if(s[u]!=s[v])k++;
            u++;v--;
        }
        int k1=0;u=i;v=s.size()-1;
        while(u<v)
        {
            if(s[u]!=s[v])k1++;
            u++;v--;
        }

        if(k<=2&&k1<=2)return 1;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("GDX.inp","r",stdin);
    freopen("GDX.out","w",stdout);
    cin>>q;

    while(q--)
    {
        cin>>s;
        cout<<sol(s)<<'\n';
    }

    return 0;
}
