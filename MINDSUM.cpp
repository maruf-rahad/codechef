#include<bits/stdc++.h>
using namespace std;
long long n,d;
pair<long long,long long>pll;

pair<long long,long long>p22;

map<long long,long long>mp;

map<long long,long long>  ::  iterator it;

queue<pair<long long,long long> > q;

void bfs ()
{
    long long i,x,y,b;
    i = 1;
    while(i<60000)
    {
        pll = q.front();
        q.pop();
        x = pll.first;
        y = pll.second;

        x = x+d;
        y++;

      //  printf("number %lld    :  %lld %lld\n",i,x,y);

        if(mp.find(x)==mp.end())
        {
            mp[x] = y;
        }
        p22.first = x;
        p22.second = y;
        q.push(p22);

        x = x-d;

        b = 0;

        while(x>0)
        {
            b = b + x%10;
            x = x/10;
        }

        // printf("number %lld    :  %lld %lld\n",i,b,y);

         p22.first = b;
         p22.second = y;
         q.push(p22);

        if(mp.find(b)==mp.end())
        {
            mp[b] = y;
        }

        i++;
        if(i==60000) return;
    }



}

int main()
{
    long long a,b,c,i,j,x,y,sumt,t,mi;

    scanf("%lld",&t);
    while(t--)
    {

        mp.clear();
        while(!q.empty())
        {
            q.pop();
        }

        a = 0;

        scanf("%lld %lld",&n,&d);

        pll.first = n;

        pll.second = 0;

        q.push(pll);

        mp[n] = 0;


        bfs();
        mi = 12345678912345678;

        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->first<mi)
            {
                mi = it->first;
                a = it->second;
            }

        }


        printf("%lld %lld\n",mi,a);


    }


return 0;
}
