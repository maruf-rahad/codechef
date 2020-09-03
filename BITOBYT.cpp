#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,c,d,x,y,t,sum;

    scanf("%lld",&t);
    while(t--)
    {


            scanf("%lld",&n);
            sum = 0;
            x = 0;
            int flag = 1,flag2 = 0,flag3 = 0;
            for(i=1;i<=n;i++)
            {
                x++;
                if(x==3&&flag==1)
                {
                    flag=2;
                    x = 1;
                }
                else if(flag==2&&x==9)
                {
                    x = 1;
                    flag=3;
                }
                else if(flag==3&&x==17)
                {
                    sum++;
                    x = 1;
                    flag = 1;

                }

            }
            long long total = pow(2,sum);


         //   printf("%d\n",flag);

            if(flag == 1)
            {
                printf("%lld 0 0\n",total);
            }
            else if(flag == 2)
            {
                    printf("0 %lld 0\n",total);

            }
            else{
                printf("0 0 %lld\n",total);
            }



    }

return 0;
}
