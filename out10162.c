#include<stdio.h>
main()
{
    int n,i,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;)
        {
            sum++;
            i=1+(i*2);
        }
        printf("%d\n",sum);
    }
}