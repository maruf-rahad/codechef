#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 50000

ll  ara[mx+10];
vector<ll>v;

void sieve()
{
    ll i,j;
    v.push_back(2);

    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0){
            v.push_back(i);
            for(j=i*i;j<=mx;j+=(2*i))ara[j] = 1;
        }
    }
}

ll factorcnt(ll n)
{
    ll i,j,sum,s,sz;
    sz = v.size();
    s = sqrt(n);
    sum = 0;
    for(i=0;i<sz&&v[i]<=s;i++)
    {
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                sum++;
                n/=v[i];
            }
        }
    }
    if(n!=1)
    {
        sum++;
    }
    return sum;
}
int main()
{
    ll n,m,a,b,i,j,s,t;
    sieve();

    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld %lld",&n,&m);

       a = factorcnt(n);
       if(a>=m)printf("1\n");
       else printf("0\n");

















    }


return 0;
}
