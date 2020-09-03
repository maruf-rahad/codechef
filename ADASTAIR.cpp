#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,c,d,x,y,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&a);
        int ara[n+1];

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        ara[0] = 0;
        c = 0;
        for(i=1;i<=n;i++)
        {
            b =  (ara[i]-ara[i-1]);
            if(b%a==0)
            {
                c = c+(b/a)-1;
            }
            else{
                c = c + b/a;
            }
        }

        printf("%d\n",c);


    }


return 0;
}
