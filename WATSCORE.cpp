#include<bits/stdc++.h>
using namespace std;
int ara[15];
int main()
{
    int t,n,m,a,b,i,j,x,y,sum;

    scanf("%d",&t);
    while(t--)
    {
        memset(ara,0,sizeof(ara));
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            if(a>8)
                continue;

            ara[a] = max(ara[a],b);

        }
        sum = 0;
        for(i=1;i<=11;i++)
        {
            sum+=ara[i];
                    }
            printf("%d\n",sum);


    }








return 0;
}
