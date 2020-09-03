#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<int>st;
set<char> :: iterator it;
vector<int>v;
int main()
{
    int n,m,a,b,c,d,i,j,x,y,t,k=0;
        string s;
    scanf("%d",&t);
    while(t--)
    {
       st.clear();
       cin>>n;
       while(n--)
       {
           scanf("%d",&a);
           st.insert(a);
       }
       printf("%d\n",st.size());
    }













return 0;
}
