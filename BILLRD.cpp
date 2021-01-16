#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,m,a,b,i,j,x,y;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&n,&m,&x,&y);

        m = m%4;
        if(x==y)
        {
            printf("%lld %lld\n",n,n);
            continue;
        }

        a = n - max(x,y);
        x = x+a;
        y = y+a;

        if(m==1)
            printf("%lld %lld\n",x,y);
        swap(x,y);
        if(m==2)
            printf("%lld %lld\n",x,y);

        if(x>y)
        {
            x = n-(min(x,y));
            y = 0;
            if(m==3)
                printf("%lld %lld\n",x,y);
            swap(x,y);

            if(m==0)printf("%lld %lld\n",x,y);
        }
        else{
            y = n-min(x,y);
            x = 0;
            if(m==3)
               printf("%lld %lld\n",x,y);
            swap(x,y);
            if(m==0)
            {
                printf("%lld %lld\n",x,y);
            }
        }
    }

return 0;
}
