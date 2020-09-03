#include<bits/stdc++.h>
using namespace std;
int ara[200];

void jingalala()
{
    ara[0] = 0;
    ara[1] = 0;
    int i,x,a,b,flag,j;
    for(i=2;i<=130;i++)
    {
        flag = 0;
        x = 0;
        for(j=1;j<=i-2;j++)
        {
            if(ara[i-1]==ara[j])
            {
                flag = 1;
                x = j;
            }
        }
        if(flag==0)
        {
            ara[i] = 0;
        }
        else{
            ara[i] = abs(i-x-1);
        }
    }
}

int main()
{
    int n,i,a,b,j,x,y,sum,t;
    jingalala();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(ara[n]==ara[i])sum++;
        }
        printf("%d\n",sum);
    }















return 0;
}
