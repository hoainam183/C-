#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int u=0;u<k;u++)
    {
        int n, a[200005];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int ma = 0,s=a[0];
        ma = a[0];
        for(int i=1;i<n;i++){
            if(abs(a[i])%2==abs(a[i-1])%2) {
                s=a[i];
                ma=max(ma,s);
            }
            else{
                if(s<0) s=0;
                s+=a[i];
                ma=max(ma,s);
            }
        }
        ma=max(ma,s);
        cout<<ma<<endl;
    }
}
