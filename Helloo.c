#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    char str1[]= {"Saturday"};
    char str2[]= {"Sunday"};
    char str3[]= {"Monday"};
    char str4[]= {"Tuesday"};
    char str5[]= {"Wednesday"};
    char str6[]= {"Thursday"};
    char str7[]= {"Friday"};
    while(gets(str)!=EOF)
    {
        if(strcmp(str,str1)==0)
        {
            printf("Tuesday\n");
        }
        if(strcmp(str,str2)==0)
        {
            printf("Wednesday\n");
        }
        if(strcmp(str,str3)==0)
        {
            printf("Thursday\n");
        }
        if(strcmp(str,str4)==0)
        {
            printf("Friday\n");
        }
        if(strcmp(str,str5)==0)
        {
            printf("Saturday\n");
        }
        if(strcmp(str,str6)==0)
        {
            printf("Sunday\n");
        }
        if(strcmp(str,str7)==0)
        {
            printf("Monday\n");
        }



    }




}
