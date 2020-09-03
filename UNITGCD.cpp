#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<=3)
        {
            printf("1\n%d",n);
            for(i=1;i<=n;i++)printf(" %d",i);
            printf("\n");
        }
        else{
                printf("%d\n",n/2);
            printf("3 1 2 3\n");
            sum = 3;

            while(sum<n)
            {
                if(n-sum>1)
                {
                    printf("%d %d %d\n",2,sum+1,sum+2);
                    sum+=2;
                }
                else{
                    printf("%d %d\n",1,sum+1);
                    sum+=1;
                }
            }
        }
    }














return 0;
}
