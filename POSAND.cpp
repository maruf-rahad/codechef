#include<bits/stdc++.h>
using namespace std;
int mx = 111111;
set<int>st;

void make()
{
    int sum = 4;
    for(int i=1;sum<=mx;i++)
    {
        sum = sum*2;
        st.insert(sum);
    }
}
int main()
{
    make();

    int n,m,a,b,i,j,x,y,sum,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        if(n==2||n==4||st.find(n)!=st.end())
        {
            printf("-1\n");
            continue;
        }
        if(n==1){
                printf("1\n");
                continue;
        }
        if(n==3)
        {
            printf("1 3 2\n");
            continue;
        }
        else {
            printf("2 3 1 5 4");
        }
        a = 6;
        int flag = 0;
        for(auto it : st)
        {
           for(i=a;i<=it-1&&i<=n;i++)
           {
               printf(" %d",i);

               if(i==n)
               {
                   flag = 1;
                   break;
               }
           }

           if(flag==0&&it<=n)
           {
               printf(" %d %d",it+1,it);

               a = it+2;
           }

           if(flag==1)break;

        }

        printf("\n");
    }









return 0;
}
