#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag;

    while(scanf("%d %d %d %d %d",&n,&a,&m,&b,&x)==5)
    {
        i = 1;
        sum = 0;
        while(x>0)
        {
            sum++;
            flag = 0;
            if(i>=n)
            {
                x-=a;
                flag = 1;
            }
            if(x>0&&i>=m)
            {
                x-=b;
            }
            i++;
        }

        printf("%d\n",sum);



    }











return 0;
}
