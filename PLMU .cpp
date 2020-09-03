#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,a,b,i,j,sum,x;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        a = 0;
        b = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&x);
            if(x==0)a++;
            else if(x==2)b++;
        }
        a--;
        b--;
        sum = 0;
        sum+=(a*(a+1))/2;
        sum+=(b*(b+1))/2;

        printf("%lld\n",sum);




    }










return 0;
}
