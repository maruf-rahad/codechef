#include<bits/stdc++.h>
using namespace std;
char ch[100005][15];
int main()
{
    int n,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
          scanf("%s",ch[i]);


      }
     for(i=1;i<n;i++)
     {
         for(j=0;j<=9;j++)
         {
             if(ch[i][j]=='1'&&ch[i-1][j]=='1')
             {
                 ch[i][j] = '0';
             }
             else if(ch[i-1][j]=='1'){
                ch[i][j] = '1';
             }
         }
     }
     int sum = 0;
     for(i=0;i<=9;i++)
     {
            if(ch[n-1][i]=='1')
            {
                sum++;
            }
     }

     printf("%d\n",sum);

    }












return 0;
}
