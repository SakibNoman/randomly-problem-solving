#include<stdio.h>
main()
{
    long n;
    while(scanf("%li",&n)!=EOF)
    {
        if(n<0)
            break;
        else
        {
            if(n==0)
                printf("0\n");
            else if(n==1)
                printf("1\n");
            else if(n==2)
                printf("2\n");
            else
                printf("%li\n",n+1);

        }
    }
}