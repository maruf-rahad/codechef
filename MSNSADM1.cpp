#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,sum;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);

            b = v[i-1];
            b = b*20-a*10;
            if(b<0)b = 0;
            v[i-1] = b;
        }
        sort(v.begin(),v.end());
        printf("%d\n",v[n-1]);

    }



return 0;
}
