#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int n,m,a,b,i,j,t;

    scanf("%d",&t);
    while(t--)
    {
        mp.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            mp[a]++;

        }

        if(mp.size()==1&&a==0)
        {
            printf("0\n");
        }
        else
        {
            a = mp.size();

            if(mp.find(0)!=mp.end())a--;

            printf("%d\n",a);
        }
    }












    return 0;
}
