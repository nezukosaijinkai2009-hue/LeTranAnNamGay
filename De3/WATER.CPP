#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("WATER.INP","r",stdin);
    //freopen("WATER.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,k;cin>>n>>m>>k;
    vector<long long>a(n+1,0);
    for(int i=0;i<m;i++)
    {long long x,y,z;cin>>x>>y>>z;
    a[x-1]+=z;a[y]-=z;}
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    sort(a.begin(),a.end());
    while(k--)
    {
        long long b;cin>>b;
        cout<<a.end()-lower_bound(a.begin(),a.end(),b)<<"\n";
    }
    return 0;
}
