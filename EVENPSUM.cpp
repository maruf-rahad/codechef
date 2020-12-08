#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,m,a,b,sum,x1,y1,x2,y2;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&a,&b);

        if(a%2==0)
        {
            x1 = a/2;
            y1 = a/2;
        }
        else
        {
            x1 = a/2;
            y1 = a/2+1;
        }

        if(b%2==0)
        {
            x2 = b/2;
            y2 = b/2;
        }
        else
        {
            x2 = b/2;
            y2 = b/2+1;
        }

        printf("%lld\n",x1*x2+y1*y2);

    }


return 0;
}
