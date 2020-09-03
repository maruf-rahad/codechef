#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y,a,b,t;
    string s,s2;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        cin>>s;
        cin>>s2;
        int sum = 0;

        for(i=0;i<n;i++)
        {
            if(s[i]==s2[i])
            {
                sum++;
            }
            else if(s2[i]=='N'){
                continue;
            }
            else if(s[i]!=s2[i])
            {
                i++;
            }
        }
        printf("%d\n",sum);
    }











return 0;

}
