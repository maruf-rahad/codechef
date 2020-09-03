#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll mod = 1000000007;

int main()
{
    ll n,m,a,b,t,i,j,sum,x;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum = 0;
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        x = 0;
        for(i=n-1;i>=0;i--)
        {
            a = v[i]-x;
            x++;
            if(a<0)a = 0;
            sum = (sum+a)%mod;
        }
        printf("%lld\n",sum);
    }












return 0;
}
