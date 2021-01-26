#include<stdio.h>
main()
{
    int l;
    while(scanf("%d",&l)!=EOF)
    {
        int w=(l*6)/10;
        int r=l/5;
        float y= (float)w/2;
        float x= ((float)l*9)/20;
        printf("L = %d\nW = %d\nR = %d\n(X, Y) = (%.2f, %.2f)\n",l,w,r,x,y);
    }
}

