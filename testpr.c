#include<stdio.h>
main()
{
    int a,b,c;
    char ch,chh;
    while(scanf("%d%c%d%c%d",&a,&ch,&b,&chh,&c)!=EOF)
    {
        if(b==2)
        {
            if(c>0)
            {
                if(c%400==0||(c%4==0&&c%100!=0))
            {
                if(a>=1&&a<=29)
                    printf("Hail Humanity!\n");
                else
                    printf("Humanity is doomed!!\n");
            }
            else
                {
                    if(a>=1&&a<=28)
                    printf("Hail Humanity!\n");
                else
                    printf("Humanity is doomed!!\n");
                }
            }
            else
                printf("Humanity is doomed!!\n");
            
        }
        else if(b==4||b==6||b==9||b==11)
        {
            if(c>0)
            {
                if(a>=1&&a<=30)
                printf("Hail Humanity!\n");
            else
                printf("Humanity is doomed!!\n");
            }
            else
                printf("Humanity is doomed!!\n");
            
        }
        else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
        {
            if(c>0)
            {
                if(a>=1&&a<=31)
                printf("Hail Humanity!\n");
            else
                printf("Humanity is doomed!!\n");
            }
            else
                printf("Humanity is doomed!!\n");
            
        }
        else
            printf("Humanity is doomed!!\n");
    }
    
}