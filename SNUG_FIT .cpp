#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
vector<ll>v2;
int main()
{
    ll n,m,a,b,i,j,x,y,sum,t;

    scanf("%lld",&t);
    while(t--)
    {
        v.clear();
        v2.clear();
        sum = 0;
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            v2.push_back(a);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        for(i=0;i<n;i++)
        {
            sum+=min(v[i],v2[i]);
        }

        printf("%lld\n",sum);
    }









return 0;
}
