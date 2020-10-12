#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[111111];

int main()
{
    ll n,m,a,b,i,j,x,y,t,flag;

    scanf("%lld",&t);

    while(t--)
    {
        flag = 0LL;
        ara[0] = 0LL;

        scanf("%lld %lld",&n,&m);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        for(i=1;i<=n;i++)
        {
            ara[i]+=ara[i-1];

            if(ara[i]<m)
            {
                printf("%lld\n",i);
                flag = 1;
                break;
            }
            ara[i]-=m;
        }
        if(flag==0)
        {
            ll sum = n;
            sum+=(ara[n]/m) + 1;


            printf("%lld\n",sum);
        }
    }














return 0;
}
