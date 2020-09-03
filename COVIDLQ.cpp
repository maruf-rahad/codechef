#include<bits/stdc++.h>
using namespace std;
int ara[120];
int main()
{
    int t,n,a,b,i,j,flag,flag2;
    scanf("%d",&t);
    while(t--)
    {
        flag = 0;
        flag2 = 0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1; i<=n; i++)
        {
            if(ara[i]==1&&flag==0)
            {
                flag = 1;
                a = i;
            }
            else if (ara[i]==1)
            {
                b = i;
                if(b-a<=5)
                {
                    flag2 = 1;
                    break;
                }
                a = b;
            }
        }
        if(flag2==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }











    return 0;
}
