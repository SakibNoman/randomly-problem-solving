#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n,arr1[50],arr2[50],i,j;
    long cas=0;
    while(scanf("%d",&n)!=EOF)
    {
        cas++;
        j=1;
        int h=1;
        for(i=n+1;i<=2*n;i++)
        {
            arr1[j++]=i;
        }
        for(int k=1;k<=n;k++)
        {
            arr2[h++]=k;
        }
        for(int a=1;a<=n;a++)
        {
            for(int b=1;b<=n;b++)
            {
                int x=gcd(arr1[b],arr2[a]);
                arr1[b]=arr1[b]/x;
                arr2[a]=arr2[a]/x;
                if(arr2[a]==1)
                {
                    break;
                }

            }
        }
        long long mult=1;
        for(int c=1;c<=n;c++)
        {
            mult=mult*arr1[c];
        }
        printf("Case %li: %lli\n",cas,mult/(n+1));
        
    }
    return 0;
}
