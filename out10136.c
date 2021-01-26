#include<stdio.h>
#include<math.h>
main()
{
    long long t,n,i,sum,h,j;
    scanf("%lli",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%lli",&n);
        for(j=1;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                
                h=n/j;
                sum=sum+j+h;

                if(sqrt(n)==j)
                    sum=sum-sqrt(n);
            }
        }
        printf("%lli\n",sum);
    }
}
