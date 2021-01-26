#include<stdio.h>
main()
{
    long long n1,n2,n,a,b,c;
    while(scanf("%lli %lli",&n1,&n2)!=EOF)
    {
        n=n1+n2;
        if(n%2==0)
        {
            a=(n/2);
            printf("%lli\n",a);
        }
        else
        {
            b=(n/2);
            c=b+1;
            printf("%lli %lli\n",b,c);
        }

    }
}