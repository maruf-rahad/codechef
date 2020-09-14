#include<bits/stdc++.h>
using namespace std;
int ara[10];
int visited[10];


int main()
{

    int n,i,j,a,b,x,y,t,sum,mn,mx,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        mx = -1;
        mn = 100;

        for(i=1; i<=n; i++)
        {
            sum = 1;
            memset(visited,0,sizeof(visited));
            visited[i] = 1;

            for(j=i+1; j<=n; j++)
            {
                if(ara[j]<ara[i])
                {
                    if(visited[j]==0)
                    {
                        sum++;
                        visited[j] = 1;
                    }
                    for(k=i-1; k>=1; k--)
                    {
                        if(ara[k]>ara[j]&&ara[k]<=ara[i]&&visited[k]==0)
                        {
                            sum++;
                            visited[k] = 1;
                        }
                    }
                }

            }

            for(j=i-1; j>=1; j--)
            {
                if(ara[j]>ara[i])
                {
                    if(visited[j]==0)
                    {
                        sum++;
                        visited[j]=1;
                    }

                    for(k=i+1; k<=n; k++)
                    {
                        if(ara[k]<ara[j]&&ara[k]>=ara[i]&&visited[k]==0)
                        {
                            sum++;
                            visited[k] = 1;
                        }
                    }
                }
            }



            mx  = max(mx,sum);
            mn = min(mn,sum);


        }

        printf("%d %d\n",mn,mx);


    }












    return 0;
}
