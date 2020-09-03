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

int ara[20];
int ara2[22222];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;

    scanf("%d",&t);

    while(t--)
    {
        memset(ara,0,sizeof(ara));
        memset(ara2,0,sizeof(ara2));

        scanf("%d",&n);
        mx = 0;
        x = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);

            ara[a]++;
        }

        for(i=1;i<=10;i++)
        {
            ara2[ara[i]]++;
        }
        mx = -1;
        x = 0;
        for(i=1;i<=20005;i++)
        {
            if(ara2[i]>mx)
            {
                mx = ara2[i];
                x = i;
            }
        }


        printf("%d\n",x);

    }





    return 0;
}
