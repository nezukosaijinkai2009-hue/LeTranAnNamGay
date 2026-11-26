e#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DIGITS.INP","r",stdin);
    freopen("DIGITS.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,t=0,m=9,i=1;cin>>n;
    while(n>0){if(m<=n)
    {t+=m*i;n-=m;m*=10;i++;}
    else{t+=n*i;break;}}
    cout<<t;return 0;
}
