#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BUS.INP","r",stdin);
    freopen("BUS.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,a,b,c;cin>>n>>m>>a>>b;c=n/__gcd(n,m)*m;
    cout<<(b/c)-(a/c)<<"\n"<<(b/n)-(a/n)+((b/m)-(a/m))-(b/c)-(a/c);
    return 0;
}
