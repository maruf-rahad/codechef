#include<bits/stdc++.h>
using namespace std;
int ara[100];
int main()
{
    int n,m,a,b,i,j,x,y,t,mx,mn,sum;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        mx = 1;
        mn = 9999999;
        sum = 1;

        for(i=2;i<=n;i++)
        {
            if(ara[i]-ara[i-1]<=2)
            {
                sum++;
                continue;
            }
            else{
                mx = max(sum,mx);
                mn = min(sum,mn);
                sum = 1;
            }
        }
         mx = max(sum,mx);
        mn = min(sum,mn);

        printf("%d %d\n",mn,mx);

    }













    return 0;
}
