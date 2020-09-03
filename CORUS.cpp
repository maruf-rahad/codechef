#include<bits/stdc++.h>
using namespace std;
int ara[28];
int main()
{
    int n,a,b,i,j,x,y,m,t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        getchar();
        memset(ara,0,sizeof(ara));
        for(i=0;i<n;i++)
        {
            scanf("%c",&ch);
            ara[ch-'a']++;
        }
        while(m--)
        {
            int sum = 0;
            scanf("%d",&a);
            for(i=0;i<26;i++)
            {
                if(ara[i]>a)
                {
                    sum+=(ara[i]-a);
                }
            }
            printf("%d\n",sum);
        }
    }












    return 0;
}
