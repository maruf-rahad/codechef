#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>mp2;
map<int,int> :: iterator it;

int main()
{
    int t,n,m,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int sum = 0;
        x = -1;

        mp.clear();
        mp2.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a!=x)
            {
                x = a;
                sum++;
            }
            mp[a]++;
        }
        for(auto a : mp)
        {
            x = a.first;
            y = a.second;

            mp2[y] = 1;
        }
        if(mp.size()!=sum||mp2.size()!=sum)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");




    }












return 0;
}
