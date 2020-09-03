#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[111111];
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s",&ch);
        n = strlen(ch);
        x = 0;
        for(i=0;i<n-1;i++)
        {
            if(ch[i]!=ch[i+1])
            {
                x++;
                i++;
            }
        }

        printf("%d\n",x);


    }










    return 0;
}
