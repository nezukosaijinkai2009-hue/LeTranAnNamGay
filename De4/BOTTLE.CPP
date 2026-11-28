#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BOTTLE.INP","r",stdin);
    freopen("BOSTLE.OUT","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k;cin>>n>>k;
    long long c=n;while(n>=k)
    {c+=n/k;n=n%k+n/k;}
    cout<<c<<"\n"<<n;return 0;
}

