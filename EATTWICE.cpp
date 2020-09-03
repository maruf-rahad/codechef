#include<bits/stdc++.h>
using namespace std;
long long ara[100005];
int main()
{
    long long n,m,i,j,x,y,a,b,t,sum;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&m);

        for(i=1;i<=m+1;i++)
        {
            ara[i] = 0;
        }
        x = 0;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld",&a,&b);
            if(a<=m)
            {
                ara[a] = max(b,ara[a]);
                if(ara[a]>x)
                {
                    x = ara[a];
                    y = a;
                }
            }
        }
        sum = x;
        long long ma = 0;
        for(i=1;i<=m;i++)
        {
            if(i!=y&&ara[i]>ma)
            {
                ma  = ara[i];
            }
        }
        sum+=ma;
        printf("%lld\n",sum);

    }










return 0;

}
