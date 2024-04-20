#include<bits/stdc++.h>
#define ll long long
#define f(i,x,y) for(i=x;i<=y;i++)
#define r(i,x,y) f(i,x,y-1)
#define fo(i,x,y) for(i=x;i>=y;i--)
#define re(i,x,y) fo(i,x,y-1)
#define l(a) a.size()
#define endl '\n'
using namespace std;
string s;
int i,j;
bool kt=1;
int main()
{
    freopen("tachso.inp","r",stdin);
    freopen("tachso.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    while(i<l(s))
    {
        if('0'<=s[i]&&s[i]<='9')
        {
            kt=0;
            while('0'<=s[i]&&s[i]<='9')
            {
                cout<<s[i];
                i++;
            }
            cout<<endl;
            i--;
        }
        i++;
    }
    if(kt) cout<<"No";
    return 0;
}
