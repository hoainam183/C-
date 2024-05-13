#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101][101],b[101][101];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>b[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){
                swap(a[i][j],b[n+1-j][i]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[i][j]==1&&a[i][j]!=1) {
                cout<<"NO";
                return 0;
            }
        }
    }
    // cout<<"Yes";
    for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;}
        for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++) cout<<b[i][j]<<" ";
        cout<<endl;}
}
