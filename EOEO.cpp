#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


    ll t,n,m,a,b,i,j,x,y,sum;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        m = n;
        sum =0;
        if(n%2==1)
        {
            printf("%lld\n",n/2);
        }
        else {

            while(n%2==0)
            {
                sum++;
                n/=2;
            }
            x = 2;

            for(i=1;i<=sum;i++)
            {
                x = x*2;
            }

            if(x>=m)
            {
                printf("%lld\n",0);
            }
            else{
                printf("%lld\n",m/x);
            }


        }
    }











return 0;
}
