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
#define nn printf("\n")
#define no printf("NO\n")
#define yes printf("YES\n")
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

int len(int n)
{
    int sum = 0;

    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        x = 0;
        y = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&a,&b);

            if(len(a)>len(b))
            {
                x++;
            }
            else if(len(a)<len(b))
            {
                y++;
            }
            else
            {
                x++;
                y++;
            }
        }

        if(x>y)
        {
            printf("%d %d\n",0,x);
        }
        else if(x<y)
        {
            printf("%d %d\n",1,y);
        }
        else
        {
            printf("%d %d\n",2,x);
        }



    }

    return 0;
}
