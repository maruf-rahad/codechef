#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y;

    string s;

    scanf("%d",&t);
    while(t--)
    {
        cin>>n>>s;

        for(i=0;i<n;i+=4)
        {
            a = (s[i]-'0')*8 + (s[i+1]-'0')*4 + (s[i+2]-'0')*2 + (s[i+3]-'0');
            printf("%c",'a'+a);
        }
        printf("\n");


    }







    return 0;
}
