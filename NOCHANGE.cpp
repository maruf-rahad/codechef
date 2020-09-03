#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int cnt[10000];
int main()
{
    int n,m,t,a,b,i,j,x,y,flag,sum,m2;
    scanf("%d",&t);
    while(t--)
    {
        memset(cnt,0,sizeof (cnt));

        scanf("%d %d",&n,&m);
        m2 = m;
        flag = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=n;i>=1;i--)
        {
            if(m%ara[i]!=0&&flag == 0)
            {
                cnt[i] = (m/ara[i])+1;
                flag = 1;
                break;
            }
            else if(flag==0 && m%ara[i]==0){
                a = (m/ara[i])-1;
                cnt[i] = a;
                m-=a*ara[i];
            }

        }

    sum = 0;
    for(i=1;i<=n;i++)
    {
        sum+=cnt[i]*ara[i];
    }
    if(sum<m2)
    {
        printf("NO\n");
    }
    else{

        printf("YES");
        for(i=1;i<=n;i++)
        {
            printf(" %d",cnt[i]);
        }
        printf("\n");

    }
    }














    return 0;
}
