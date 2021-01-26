#include<stdio.h>
int main()
{
    int x,y,z;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        if(x>y && x>z)
        {
            if(x<y+z)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n"); 
            }
        }
        else if(y>x && y>z)
        {
            if(y<x+z)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if(z<x+y)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}