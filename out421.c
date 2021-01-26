#include<stdio.h>
main()
{
    int a,b,c,d,e,f;
    while(scanf("%d%c%d",&a,&b,&c)!=EOF)
    {
        if(a==1)
        {
            printf("%d Hour ",a);
        }
        if(a>=2 && a<=23)
        {
            printf("%d Hours ",a);
        }
        if(c==1)
        {
            printf("%d Minute\n",c);
        }
        if(c>=2 && c<=59)
        {
            printf("%d Minutes\n",c);
        }
        if(c==0)
        {
            printf("\n");
        }
    }
}