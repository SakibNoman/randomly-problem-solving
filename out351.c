#include<stdio.h>
main()
{
    int a,sum,i,arr[100],b;
    while(scanf("%d",&b)!=EOF)
    {
        arr[1]=4;
        a=b;
        sum=0;
        while(a>=2)
        {
          for(i=1;i<=a;i++)
            {
                sum=sum+i;
                
            }

            arr[a]=(sum*8)-4;
                sum=0;
            a--;  
        }
        for(i=b;i>=1;i--)
        {
            sum=sum+arr[i];
        }
        printf("%d\n",sum);
    }
}