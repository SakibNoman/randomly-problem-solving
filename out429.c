#include<stdio.h>
#include<math.h>
main()
{
    long long i,n,sum,a[25],b,c;
    while(scanf("%lli",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lli",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            b= sqrt(a[i]);
            c= b*b;
            if(a[i]==c)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}