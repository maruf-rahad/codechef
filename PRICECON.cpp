#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,sum;

    scanf("%d",&t);
    while(t--)
    {
        sum  = 0;
        x = 0;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
            if(a>m)
            {
                a = m;
            }
            x+=a;
        }

        printf("%d\n",sum-x);
    }













return 0;
}
