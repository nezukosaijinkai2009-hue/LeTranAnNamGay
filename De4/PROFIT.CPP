#include<bits/stdc++.h>
using namespace std;
map<long long,long long>a;
int main()
{
    freopen("PROFIT.INP","r",stdin);
    freopen("PROFIT.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,t=0,d=0;cin>>n>>k;a[0]=1;
    for(int i=0;i<n;i++)
    {long long x;cin>>x;
    t+=x;d+=a[t-k];a[t]++;}
    cout<<d;
}
