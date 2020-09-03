#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[100005];
ll ara2[100005];

void check(ll a,ll b,ll n)
{
    ll i,sum,flag;

    sum = 0;
        for(i=2;i<=n;i++)
        {
            ara2[i] = ara2[i-1]+a;
            if(ara2[i]!=ara[i])
               sum++;
        }
        if(sum<=1)
        {
            return ;
        }
    sum = 0;
        for(i=2;i<=n;i++)
        {
            ara2[i] = ara2[i-1]-a;
            if(ara2[i]!=ara[i])
               sum++;
        }
        if(sum<=1)
        {
            return ;
        }
    sum = 0;
        for(i=2;i<=n;i++)
        {
            ara2[i] = ara2[i-1]+b;
            if(ara2[i]!=ara[i])
               sum++;
        }
        if(sum<=1)
        {
            return ;
        }
     sum = 0;
        for(i=2;i<=n;i++)
        {
            ara2[i] = ara2[i-1]-b;
            if(ara2[i]!=ara[i])
               sum++;
        }
        if(sum<=1)
        {
            return ;
        }

    ara2[n] = ara[n];
    sum = 0;
    for(i=n-1;i>=1;i--)
    {
        ara2[i] = ara2[i+1]+a;
        if(ara2[i]!=ara[i])sum++;
    }
    if(sum<=1)return;
     sum = 0;
    for(i=n-1;i>=1;i--)
    {
        ara2[i] = ara2[i+1]-a;
        if(ara2[i]!=ara[i])sum++;
    }
    if(sum<=1)return;
     sum = 0;
    for(i=n-1;i>=1;i--)
    {
        ara2[i] = ara2[i+1]+b;
        if(ara2[i]!=ara[i])sum++;
    }
    if(sum<=1)return;
     sum = 0;
    for(i=n-1;i>=1;i--)
    {
        ara2[i] = ara2[i+1]-b;
        if(ara2[i]!=ara[i])sum++;
    }
    if(sum<=1)return;




}

int main()
{
    ll t,n,m,a,b,i,j,flag,x;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            ara2[i] = ara[i];
        }

        a = abs(ara[2] - ara[1]);
        b = abs(ara[n] - ara[n-1]);

        check(a,b,n);


            printf("%lld",ara2[1]);
            for(i=2;i<=n;i++)
            {
                printf(" %lld",ara2[i]);
            }
            printf("\n");
    }











    return 0;
}
