#include<bits/stdc++.h>
using namespace std;
long long m,n,a[1000005],b[1000005],aa[1000005],bb[1000005];
int main()
{
  //freopen("STIS.inp","r",stdin);
  //freopen("STIS.out","w",stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin>>m>>n;
  for(int i=1;i<=m;i++)
  {
      cin>>a[i];
      aa[a[i]]++;
  }
  for(int i=1;i<=n;i++)
  {
      cin>>b[i];
      bb[b[i]]++;
  }
  sort(a+1,a+1+m);
  sort(b+1,b+1+n);
  m=unique(a+1,a+1+m)-a-1;
  n=unique(b+1,b+1+n)-b-1;
  for(int i=0;i<=a[m]+a[n];i++)
  {
      int d=0;
      for(int j=1;j<=m;j++)
      {
          int h=i-a[j];
          if(bb[h]!=0&&h>=0)
          {
             d+=aa[a[j]]*bb[h];
          }
      }
      if(d!=0) cout<<i<<" "<<"-"<<" "<<d<<'\n';
  }
  return 0;
}
