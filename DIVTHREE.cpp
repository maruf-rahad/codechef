#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t,sum;

    scanf("%d",&t);

    while(t--)
    {
        sum = 0;

        scanf("%d %d %d",&n,&m,&x);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        sum = sum/m;

        if(sum>=x)
        {
            printf("%d\n",x);
        }
        else
        {
            printf("%d\n",sum);
        }
    }








return 0;
}
