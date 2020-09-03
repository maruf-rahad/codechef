#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second

map<int,int>mp;
map<int,int>mp2;
map<int,int>mp3;

map<int,int> :: iterator it;
vector<pair<int,int> >v;
vector<pair<int,int> >v2;

int main()
{

    int n,m,a,b,i,j,x,y,min1,min2,t,min3,flag,mark;

    scanf("%d",&t);

    while(t--)
    {
        v.clear();
        v2.clear();
        mp.clear();
        mp2.clear();

        flag = 0;
        min1 = INT_MAX;
        min2 =  INT_MAX;

        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            mp[a]++;
            mp2[a]+=0;
            min1 = min(min1,a);
        }

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            mp2[a]++;
            mp[a]+=0;
            min2 = min(min2,a);
        }

        min3 = min(min1,min2);





            for(it = mp.begin(); it!=mp.end(); it++)
            {
                a = it->first;

                x = mp[a];
                y = mp2[a];

                if((x+y)%2==1)
                {
                    flag = 1;
                    break;
                }


                if(x==y)
                {
                  continue;

                }
                else if(x>y)
                {
                    x-=y;
                    y = 0;
                }
                else
                {
                    y-=x;
                    x = 0;
                }

                if(x!=0)
                {
                    v.push_back({a,x/2});
                   /* if(x%2==1)
                    {
                        flag = 1;
                        break;
                    }*/
                }
                if(y!=0)
                {
                    v2.push_back({a,y/2});
                    /*if(y%2==1)
                    {
                        flag = 1;
                        break;
                    }*/
                }


            }
            if(flag==1)
            {
                printf("-1\n");
                continue;
            }

            n = v.size();
            m = v2.size()-1;
            long long cost = 0;
            i = 0;

            while(i<n&&m>=0)
            {
                a = v[i].F;
                b = v2[m].F;

                if(min3*2<=min(a,b))
                {
                    cost+=min3*2;
                }
                else
                {
                    cost+=min(a,b);
                }
                v[i].S--;
                v2[m].S--;


                if(v2[m].S==0)
                    m--;
                if(v[i].S==0)
                    i++;
            }

            printf("%lld\n",cost);
        }












    return 0;
}
