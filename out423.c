#include<stdio.h>
main()
{
    int a,b,c,x,y,z;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z)!=EOF)
    {
        if((a==x||a==y||a==z)&&(b==x||b==y||b==z)&&(c==x||c==y||c==z)&&(x==a||x==b||x==c)&&(y==a||y==b||y==c)&&(z==a||z==b||z==c))
            printf("A = B\n");
        
        else
            printf("A != B\n");
}
}