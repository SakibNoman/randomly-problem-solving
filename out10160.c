#include<stdio.h>
main()
{
    long y,i,a,b;
    while(scanf("%li",&y)!=EOF)
    {
        a=1;
        long sum=0;
        if(y==1)
            printf("1\n");
        else
        {
            for(i=2;i<=y;i++)
            {
            if((i-1)%3==0)
                a*=3;
            }
            printf("%li\n",a);
        }
        
        
    }
}
