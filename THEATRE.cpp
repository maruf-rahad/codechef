#include<bits/stdc++.h>
using namespace std;
int ara[5][5];
int visited[5][5];
int taka[5] = {25,50,75,100};
vector<int>v;

int make(int a)
{
    if(a==12)return  1;
    if(a==3)return 2;
    if(a==6)return 3;
    if(a==9)return 4;
}
int hishab()
{
    int sum = 0;
      sort(v.begin(),v.end());
      for(int i = 0;i<=3;i++)
      {
          sum += v[i]*taka[i];
          if(v[i]==0)
          {
              sum-=100;
          }
      }
      return sum;




}
int main()
{
    int i,j,a,b,x,y,t,n,m,k,l,mx,tot = 0;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(ara,0,sizeof(ara));
        memset(visited,0,sizeof(visited));
        mx = -1e9;
        for(i=1;i<=n;i++)
        {
            getchar();
            scanf("%c %d",&ch,&a);
            x = ch-'A'+1;
            a = make(a);
            ara[x][a]++;
        }
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                if(i==j)continue;
                for(k=1;k<=4;k++)
                {
                    if(k==i||k==j)continue;
                    for(l=1;l<=4;l++)
                    {
                        if(l==i||l==j||l==k)continue;
                        v.clear();
                        v.push_back(ara[1][i]);
                        v.push_back(ara[2][j]);
                        v.push_back(ara[3][k]);
                        v.push_back(ara[4][l]);
                        a = hishab();
                        mx = max(a,mx);
                    }
                }
            }
        }
        printf("%d\n",mx);
        tot+=mx;

    }

    printf("%d\n",tot);






return 0;
}
