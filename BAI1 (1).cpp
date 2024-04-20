#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],ma,vtd,d;
int main()
{
  //freopen("BAI1.inp","r",stdin);
  //freopen("BAI1.out","w",stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  a[n+1]=0;
  for(int i=1;i<=n-1;i++)
  {
      if(a[i]==1&&a[i+1]==1)
      {
          d=2;
          int j=i+2;
          while(a[j]==a[j-1]+a[j-2])
          {
              d++;
              j++;
          }
          j--;
          if(d>ma)
          {
              ma=d;
              vtd=i;
          }
          i=j;
      }
  }
  if(ma<3) cout<<0;
  else
  {
    cout<<ma<<'\n';
    for(int i=vtd;i<=ma+vtd-1;i++) cout<<a[i]<<" ";
  }
  return 0;
}
