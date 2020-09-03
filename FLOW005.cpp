#include<bits/stdc++.h>
using namespace std;
int ara[6] = {1,2,5,10,50,100};
int main()
{
    int n,m,a,b,c,d,i,j,x,y,t,k=0,sum;
    n = 6;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        sum = 0;

        for(i=5;i>=0&&m>0;i--)
        {
            sum+=m/ara[i];
            m = m%ara[i];
        }
        printf("%d\n",sum);
    }













return 0;
}
