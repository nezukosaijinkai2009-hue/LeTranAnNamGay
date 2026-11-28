#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SEVENS.INP","r",stdin);
    freopen("SEVENS.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,t=0,m=0;cin>>n;
    vector<int>vt(7,-1);vt[0]=0;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        t=(t+x)%7;
        if(vt[t]==-1)
            vt[t]=i;
        else
            m=max(m,i-vt[t]);
    }
    cout<<m;return 0;
}
