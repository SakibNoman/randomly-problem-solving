
#include<stdio.h>
main()
{
    int i,j,n;
    int a[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
                printf("%d ",a[i][j]);
            if(i==)
        }

    }
}
