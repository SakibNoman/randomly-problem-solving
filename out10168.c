#include<stdio.h>
main()
{
    long nob,i;
    long sob[1000000];
    while(scanf("%li",&nob)!=EOF)
    {
        if(nob==0)
            printf("CONFUSED\n");
        else
        {
            for(i=1;i<=nob;i++)
            {
                scanf("%li",&sob[i]);
            }
        
            long b=1;
            for(i=2;i<=nob;i++)
            {
                if(sob[i]>sob[b])
                    b=i;
            }
            if(b%100==11||b%100==12||b%100==13)
                printf("%lith\n",b);
            else if(b%10==1)
                printf("%list\n",b);
            else if(b%10==2)
                printf("%lind\n",b);
            else if(b%10==3)
                printf("%lird\n",b);
            else 
                printf("%lith\n",b);
        }
        
        
    }
}