#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,m,a,b,i,j,x,y,sum;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        a = 0;
        b = 0;
        sum = 0;

        while(n--)
        {
            scanf("%d",&x);
            if(x>=80||x<=9)
            {
                a++;
            }
            else{
                b++;
            }
        }

        if(a%m==0)sum = a/m;
        else sum = a/m+1;
        if(b%m==0)sum+=(b/m);
        else sum+=(b/m+1);

        printf("%d\n",sum);

    }









return 0;
}
