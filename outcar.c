#include<stdio.h>
main()
{
    long long t,i,j,temp,k;
    long long st[100000000];
    long long n;
    scanf("%lli",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lli",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lli",&st[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(st[i]>st[j])
                {
                    temp=st[i];
                    st[i]=st[j];
                    st[j]=temp;
                }
                
            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%lli ",st[i]);
        }
        printf("\n");
    }
}