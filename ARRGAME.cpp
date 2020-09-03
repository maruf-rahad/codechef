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
int ara[333333];
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;

    scanf("%d",&t);

    while(t--)
    {
        v.clear();

        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        sum = 0;

        mx = -1;

        for(i=1;i<=n;i++)
        {
            if(ara[i]==0)sum++;
            else
            {
                v.push_back(sum);
                sum = 0;
            }
        }
       v.push_back(sum);

       sort(v.begin(),v.end());
       n =  v.size()-1;

        if(v[n]%2==1&&v[n-1]<(v[n]+1)/2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }


    }

    return 0;
}
