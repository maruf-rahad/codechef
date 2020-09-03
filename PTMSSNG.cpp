#include<bits/stdc++.h>
using namespace std;
map<int,int>mpx;
map<int,int>mpy;
map<int,int> :: iterator it;
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        mpx.clear();
        mpy.clear();

        for(i=1;i<=4*n-1;i++)
        {

            scanf("%d %d",&a,&b);
            mpx[a]++;
            mpy[b]++;
        }

        for(it = mpx.begin();it!=mpx.end();it++)
        {
            if((it->second)%2==1)
            {
                printf("%d ",it->first);
                break;
            }
        }

        for(it = mpy.begin();it!=mpy.end();it++)
        {
            if((it->second)%2==1)
            {
                printf("%d\n",it->first);
                break;
            }
        }



    }












return 0;
}
