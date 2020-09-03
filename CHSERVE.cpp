#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,x,y,z;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&m);
        y = m;
        m = m*2;
        x = (a+b)%m;

       //printf("%lld\n",x);

        if(x>=0&&x<y)
        {
            printf("CHEF\n");
        }
        else{
            printf("COOK\n");
        }

    }








return 0;
}
