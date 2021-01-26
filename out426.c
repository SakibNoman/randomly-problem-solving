#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0||b==0||c==0)
        {
            printf("NO\n");
        }
        else
        {
            if((a+b+c)==180)
                printf("YES\n");
            else
                printf("NO\n");
        }
        
    }
}