#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s="";
bool kt(string s)
{
    if(s.find("bb")!=-1) return false;
    long long u,v;
    for(int u=0;u<s.size();u++)
    {
        for(int v=u;v<s.size();v++)
        {
            string b=s.substr(u,v-u+1);
            b=b+b+b;
            if(s.find(b)!=-1) return false;
        }
    }
    return true;
}
void dequy(int i)
{
    if(i==n)
    {
        if(kt(s)) ans++;
        return;
    }
    for(char j='a';j<='b';j++)
    {
        s=s+j;
        dequy(i+1);
        s.erase(s.size()-1,1);
    }
}
int main()
{
  freopen("MUMBA.inp","r",stdin);
  freopen("MUMBA.out","w",stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin>>n;
  if(n>=17)
  {
      cout<<0;
      return 0;
  }
  dequy(0);
  cout<<ans;
  return 0;
}
