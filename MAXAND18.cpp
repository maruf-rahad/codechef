#include<bits/stdc++.h>
using namespace std;
#define F            first
#define S            second
#define PB           push_back
#define MP           make_pair
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define Precision(a) cout << fixed << setprecision(a)
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF9 2147483647
#define INF18 9223372036854775806
#define ll long long
#define ull unsigned long long
#define pp pair<int,int>
#define ppp pair<int,pp >
#define mapii map<int,int>
#define mapll map<ll,ll>
#define mapsi map<string,int>
#define mapss map<string,string>

char Uplowch(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
        ch += 32;
    return ch;
}
char Lowupch(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
        ch -= 32;
    return ch;
}
ll ara[40];

vector<pair<ll,ll> >v;
void make(ll n)
{
    ll x = 1;

    while(n!=0)
    {
        if(n%2==1)
        {
            ara[x]++;

        }



        x++;
        n/=2;
    }
}

ll power(ll n)
{
    if(n<0)
        return 0;
    ll sum = 1;

    for(ll i=1; i<=n; i++)
    {
        sum = sum*2;
    }
    return sum;
}
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);

    while(t--)
    {
        memset(ara,0,sizeof(ara));
        v.clear();
        scanf("%lld %lld",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            make(a);
        }

        for(i=1; i<=32; i++)
        {
            a = ara[i]*power(i-1);

            v.push_back({a,-i});
        }

        sort(v.begin(),v.end());


        x = 0;
        sum = 0;
        for(i=v.size()-1; i>=0; i--)
        {

            if(v[i].F>0)
            {
                sum +=power(-(v[i].S)-1);
                x++;
            }
            if(x==m)
            {
                break;
            }

        }

        memset(ara,0,sizeof(ara));

        make(sum);


        for(i=1;i<=35;i++)
        {
            if(ara[i]==0&&x<m)
            {
                x++;
                ara[i] = 1;
            }
        }
        sum = 0;
        for(i=1;i<=35;i++)
        {
            if(ara[i]>0)
                sum += ara[i]*power(i-1);
        }

        printf("%lld\n",sum);

    }


    return 0;
}
