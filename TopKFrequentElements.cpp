#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[100];
    pair<int,int> p[100];
    set<int>se;
    for(int i=1;i<=n;i++) {cin>>a[i];se.insert(a[i]);}
    int k=0;
    for(auto it : se){
        p[k].first = it;
        p[k].second = k;
        k++;
    }
    sort(p,p+k);
    for(int i=0;i<k;i++) cout<<p[i].first<<" ";
}