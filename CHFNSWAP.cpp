#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,m,a,b,i,j,sum,x,y;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        if(((n*(n+1))/2)%2==1)
        {
            printf("0\n");
            continue;
        }

        ll low = 1,high = n,mid;
        m = ((n*(n+1))/2)/2;
        y = ((n*(n+1))/2)- x;

        while(low<=high)
        {
            mid = (low+high)/2;

            x = (mid*(mid+1))/2 ;

            if(x<=m)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }



        mid = low-1;

        x = (mid*(mid+1)/2);
        y = ((n*(n+1))/2)- x;

        if(x!=y)
        {
            printf("%lld\n",min(mid,n-mid));
        }
        else
        {

            x = mid-1;
            y = n-mid-1;
            sum = (x*(x+1))/2 + (y*(y+1)/2) + min(mid,n-mid);

            printf("%lld\n",sum);




        }





    }













return 0;
}
