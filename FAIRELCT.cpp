#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;

int main()
{
    int t,n,m,a,b,i,j,x,y,cnt;

    scanf("%d",&t);

    while(t--)
    {
        x = 0;
        y = 0;
        v.clear();
        v2.clear();

        scanf("%d %d",&n,&m);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
            x+=a;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);
            v2.push_back(a);
            y+=a;
        }

        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());

        i = 0;
        j = m-1;
        cnt = 0;

        while(i<n&&j>=0)
        {
            if(x>y)break;

            cnt++;
            x-=v[i];
            x+=v2[j];
            y-=v2[j];
            y+=v[i];
            i++;
            j--;
        }

        if(x>y)
        {
            printf("%d\n",cnt);
        }
        else
        {
            printf("-1\n");
        }
    }








return 0;
}
