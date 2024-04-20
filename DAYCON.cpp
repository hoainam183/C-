#include<bits/stdc++.h>
using namespace std;
long long n,a,d,ma=1;
int main()
{
  freopen("DAYCON.inp","r",stdin);
  freopen("DAYCON.out","w",stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin>>n;
  int h=-0x3f;
  for(int i=1;i<=n;i++)
  {
      cin>>a;
      if(a>=h)
      {
          d++;
          ma=max(ma,d);
      }
      else
      {
          ma=max(ma,d);
          d=1;
      }
      h=a;
  }
  cout<<ma;
  return 0;
}
