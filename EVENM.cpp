#include<bits/stdc++.h>
using namespace std;
int ara[1111][1111];
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x =  1;
        int flag = 0;
        for(i=1;i<=n;i++)
        {
            if(flag==0)
            {
                ara[i][1] = x++;

                for(j=2;j<=n;j++)
                {
                    ara[i][j] = x++;
                }

                flag = 1;
            }
            else{
                   ara[i][n] = x++;
                for(j=n-1;j>=1;j--)
                {
                   ara[i][j] = x++;
                }
                flag = 0;

            }
        }

        for(i=1;i<=n;i++)
        {
            printf("%d",ara[i][1]);
            for(j=2;j<=n;j++)
            {
                printf(" %d",ara[i][j]);
            }
            printf("\n");
        }


    }








return 0;
}
