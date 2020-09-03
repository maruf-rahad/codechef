#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ara[100010];
int main()
{
    ll t,n,m,a,b,i,j,k,sum;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        sum = 0;
        for(i=1;i<=n;i++){
            scanf("%lld",&a);
            sum+=a;
        }
        printf("%lld\n",sum%k);
    }











return 0;
}
