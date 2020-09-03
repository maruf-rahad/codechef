#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,flag;

    scanf("%d",&t);
    while(t--)
    {
        flag = 0;
        x = 0;
        y = 0;

        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);

            if(a==5)
            {
                x++;
            }
            else if(a==10)
            {
                if(x==0)
                {
                    flag = 1;
                }
                else{
                    y++;
                    x--;
                }
            }
            else if(a==15)
            {
                if(x*5+y*10<10)
                {
                    flag = 1;
                }
                else{
                    if(y>0)
                    {
                        y--;
                    }
                    else
                    {
                        x-=2;
                    }
                }
            }


        }

        if(flag==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }










    }









return 0;
}
