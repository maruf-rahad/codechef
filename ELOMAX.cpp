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
#define yes printf("YES\n")
#define no printf("NO\n")
#define nn printf("\n")

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

int ara[555][555];
int place[555][555];
int bp[555];
int mx[555];
vector<pair<int,int> > v;

int main()
{
    int t,n,m,a,b,i,j,x,y,mn,sum,k=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        for(i=1;i<=n;i++)scanf("%d",&ara[i][0]);
        k = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }

       for(i=1;i<=n;i++)
       {
           ara[i][1]+=ara[i][0];
           int mxx = ara[i][1];
           x = 1;

           for(j=2;j<=m;j++)
           {
               ara[i][j] = ara[i][j-1]+ara[i][j];
               if(ara[i][j]>mxx)
               {
                   mxx = ara[i][j];
                   x = j;
               }
           }
           mx[i] = x;
       }

        for(i=1;i<=m;i++)
        {
            v.clear();

            for(j=1;j<=n;j++)
            {
                v.push_back({ara[j][i],j});

            }
            sort(v.begin(),v.end());
            int p = 1;
            x = v[n-1].S;
            y = v[n-1].F;
            place[x][i] = p;
            p++;

            for(j=n-2;j>=0;j--)
            {
                if(v[j].F==y)
                {
                    place[v[j].S][i] = place[x][i];
                    p++;
                }
                else{

                    place[v[j].S][i] = p;
                    p++;
                    x = v[j].S;
                    y = v[j].F;

                }
            }
        }

        for(i=1;i<=n;i++)
        {
            mn = 1e9;
            x = -1;
            for(j=1;j<=m;j++)
            {
                if(place[i][j]<mn)
                {
                    mn = place[i][j];
                    x = j;
                }
            }
            bp[i] = x;

        }
        sum = 0;
        for(i=1;i<=n;i++)
        {
           if(bp[i]!=mx[i])sum++;
        }

        printf("%d\n",sum);
    }
    return 0;
}
