#include<stdio.h>
#include<math.h>
int main()
{
    long long t,a,b,i,a1,div2;
    long double div1;
    scanf("%lli",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
            printf("0\n");
        else
        {
            if(a>b)
            {
                a1=a-b;
                div1=(double)a1/10;
                div2=ceil(div1);
                printf("%lld\n",div2);
            }
            else
            {
                a1=b-a;
                div1=(double)a1/10;
                div2=ceil(div1);
                printf("%lld\n",div2);
            }



        }

    }
    return 0;
}
