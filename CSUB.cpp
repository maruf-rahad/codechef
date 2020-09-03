#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<char>st;
set<char> :: iterator it;
vector<int>v;
int main()
{
    ll n,m,a,b,c,d,i,j,x,y,t,k=0;
        string s;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>m;
        cin>>s;
        x = 0;
        for(i=0;i<m;i++)
        {
            if(s[i]=='1')x++;
        }

        printf("%lld\n",(x*(x+1))/2);
    }













return 0;
}
