#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin >> n;
    cin.ignore();
    set<string> se;
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        s = s + " "+" ";
        vector<string> vt;
        string tmp="";
        for(std::string::size_type i=0;i<s.length();i++){
            if(s[i]!=' ') tmp = tmp + s[i];
            else{
                vt.push_back(tmp);
                tmp="";
            }
        }
        int d=1;
        for(int i=1;i<vt.size();i++) {
            if(vt[i]==vt[i-1]) d++;
            else{
                if(d>2) ans++;
                d=1;
            }
        }
    }
    cout<<ans;
}
