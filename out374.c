#include<stdio.h>
#include<string.h>
main()
{
    char str[10];
    while(scanf("%s",str)!=EOF)
    {
        int l=strlen(str);
        if(l==8)
        {
            if(str[0]=='S')
                printf("Tuesday\n");
            else
                printf("Sunday\n");
        }
        else if(l==6)
        {
            if(str[0]=='S')
                printf("Wednesday\n");
            else if(str[0]=='M')
                printf("Thursday\n");
            else
                printf("Monday\n");
        }
        else if(l==7)
            printf("Friday\n");
        else
            printf("Saturday\n");
    }
}