#include<stdio.h>
#include<string.h>
main()
{
    char str[1000000];
    long l,i,x;
    while(scanf("%s",str)!=EOF)
    {
        l=strlen(str);
        if(l==1)
        {
            if(str[0]=='0')
                printf("J\n");
            else
                printf("%c\n",str[0]+16);
        }
        else
        {
            for(i=l-1;i>=0;i--)
            {
                if(str[i]=='0')
                    printf("J");
                else
                    printf("%c",str[i]+16);
            }
            printf("\n");
            
        }
    }
}
