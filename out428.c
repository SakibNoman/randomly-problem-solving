#include<stdio.h>
main()
{
    int t,a,b,c,d,e,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a==13||b==13||c==13||d==13||e==13)
        {
            printf("Case %d: Oops, unlucky 13 found\n",i);
        }
        else
        {
            printf("Case %d: Wow! Not found\n",i);
        }
    }
}