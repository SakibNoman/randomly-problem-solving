#include<stdio.h>
main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n >= -26 && n <= 26)
        {
            if(n==0)
            {
                printf("Error!!\n");
            }
            else
            {
                if(n>0)
                {
                   if(n%3==0)
                    {
                        printf("%c%c%d%c%c%c\n",40,43,n,43,n+64,41);
                    }
                    else
                    {
                        printf("%c%d%c%c\n",43,n,43,n+64);
                    } 
                }
                
                else
                {
                    if(n%3==0)
                    {
                        printf("%c%d%c%c%c\n",40,n,45,(n/-1)+32+64,41);
                    }
                    else
                    {
                       printf("%d%c%c\n",n,45,(n/-1)+32+64);
                    }
                   
                }
                
            }
        }
        else
        {
            printf("Error!!\n");
        }
    }
   
}