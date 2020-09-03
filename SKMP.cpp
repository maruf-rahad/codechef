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
#define yes printf("YES\n")
#define no printf("NO\n")
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



int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    char s[100005],p[100005];
    int ara[30],ara2[30];

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%s %s",&s,&p);

       memset(ara,0,sizeof(ara));
       memset(ara2,0,sizeof(ara2));

       n = strlen(s);
       for(i=0;i<n;i++)
       {
           a = s[i]-'a';
           ara[a]++;
       }
       n = strlen(p);
       for(i=0;i<n;i++)
       {
           a = p[i]-'a';
           ara2[a]++;
       }

       for(i=0;i<=28;i++)ara[i]-=ara2[i];

       a = p[0]-'a';

       for(i=0;i<a;i++)
       {
           for(j=1;j<=ara[i];j++)printf("%c",i+'a');
       }
        flag = 0;
        for(i=0;i<strlen(p)&&i<ara[a];i++)
        {
            if(p[i]-'a'<a)
            {
                flag = 1;
            }
            else if(p[i]-'a'>a) break;
        }

        if(flag==0&&(strlen(p)!=i&&p[i]-'a'<=a))flag = 1;



        if(flag==1||ara[a]==0)
        {
             printf("%s",p);
             x = a;
        }
        else{
            for(i=1;i<=ara[a];i++)
            {
                printf("%c",a+'a');
            }
            printf("%s",p);
            x = a+1;
        }


       for(i=x;i<=28;i++)
       {
           for(j=1;j<=ara[i];j++)printf("%c",i+'a');
       }

       printf("\n");






    }

    return 0;
}
