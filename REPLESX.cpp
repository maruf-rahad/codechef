#include<bits/stdc++.h>
using namespace std;
int ara[444444];

int main()
{
    int n,t,m,a,b,i,j,k,x,y,sum,p;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&x,&p,&k);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        sort(ara+1,ara+n+1);
        sum = 0;
        if(ara[p]==x)printf("0\n");
        else if((ara[p]>x&&k<p)||(ara[p]<x&&k>p))printf("-1\n");
        else{

                if(x<ara[p])
                {
                    for(i=p-1;i>=1;i--)
                    {
                        if(ara[i]>x)sum++;
                    }
                }
                else
                {
                    for(i=p+1;i<=n;i++)
                    {
                        if(ara[i]<x)sum++;
                    }
                }

            printf("%d\n",sum+1);






        }
        printf("\n");
    }












return 0;
}
