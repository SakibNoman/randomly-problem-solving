
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{

    int t,i,a,b,x,y,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&n,&x,&y);
        if(n==2)
            printf("%d %d\n",x,y);
        else
        {
            int gcdv=gcd(x,y);
            int inc=gcdv;
            int inc3=gcdv;
                    if(gcdv*x>=y)
            {
                for(int j=1; j<=n; j++)
                {
                    if(gcdv>1)
                    {
                        printf("%d ",gcdv);
                    gcdv-=inc;
                    }
                    else
                    {
                    inc3+=inc;
                        printf("%d ",gcdv);
                    }
                }
            }
            else
            {
                int inc2=y-x;
                int inc4=inc2;
                for(int j=1; j<=n; j++)
                {
                    if(inc2>1){
                        printf("%d ",x);
                    x-=inc2;
                    }
                    else
                    {
                    inc4+=inc2;
                        printf("%d ",x);
                    }

                }
            }
            printf("\n");

        }
    }
}
