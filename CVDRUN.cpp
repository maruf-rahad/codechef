#include<bits/stdc++.h>
using namespace std;
int visited[1111];
int main()
{
    int n,m,a,b,i,j,x,y,t,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&n,&k,&x,&y);

        memset(visited,0,sizeof(visited));

        for(i=1;i<=1111;i++)
        {
            visited[x] = 1;
            if(x==y)break;
            x = (x+k)%n;
        }

        if(visited[y]==0)
        {
            printf("NO\n");
        }
        else printf("YES\n");
    }












return 0;
}
