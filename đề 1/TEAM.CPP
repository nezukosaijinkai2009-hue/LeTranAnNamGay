#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TEAM.INP","r",stdin);
    freopen("TEAM.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,d=0;cin>>n;vector<int>a(n);
    vector<int>b(n);map<int,int>c;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {cin>>b[i];c[a[i]-b[i]]++;}
    for(auto x:c){if(x.first>=0)break;
    d+=x.second*c[0-x.first];}
    cout<<d+((c[0]-1)*c[0])/2;return 0;
}
