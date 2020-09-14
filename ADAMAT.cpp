#include<bits/stdc++.h>
using namespace std;

#define nn printf("\n")

int row[100];
int col[100];
int temp[100];

int mat[100][100];


bool check(int n)
{
    if(col[n]!=n)return false;

    return true;
}

void transpose(int n)
{
    int  i;

   // printf("%d \n",n);

    for(i=1;i<=n;i++)
    {
        temp[i] = col[i];
        col[i] = row[i];
        row[i] = temp[i];
    }
}


int main()
{
    int n,m,a,b,i,j,x,y,t,sum;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                scanf("%d",&mat[i][j]);
        }

        for(i=1;i<=n;i++)row[i] = mat[i][1];

        for(i=1;i<=n;i++)col[i] = mat[1][i];

        sum = 0;
        for(i=n;i>=1;i--)
        {
            if(!check(i))
            {
                transpose(i);
                sum++;
                //pint(n);

            }
        }

        printf("%d\n",sum);
    }












return 0;
}
