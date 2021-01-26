#include<stdio.h>
 
int main()
{
    int a,b,c,i,m,n;
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((b>a && b<c)||(b<a && b>c))
                m=b;
            else if((c>a && c<b)||(c<a && c>b))
                m=c;
            else
                m=a;
            printf("Case %d: %d\n",i,m);
        }
    return 0;
}