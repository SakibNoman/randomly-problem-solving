#include<stdio.h>
main()
{
    float a,b,c,d,e;
    int x=0;
    while(scanf("%f%f%f%f%f",&a,&b,&c,&d,&e)!=EOF)
    {
        x++;
        if(a<=0||b<=0||c<=0||d<=0||e<=00)
            printf("Case %d: Invalid\n",x);
        else
        {
            if((a>=b&&a>=c&&a<=d&&a<=e)||(a>=b&&a>=d&&a<=c&&a<=e)||(a>=e&&a>=c&&a<=b&&a<=d)||(a>=e&&a>=b&&a<=c&&a<=d)||(a>=c&&a>=d&&a<=b&&a<=e)||(a>=d&&a>=e&&a<=b&&a<=c))
                printf("Case %d: %.2f\n",x,a);
            else if((b>=a&&b>=c&&b<=d&&b<=e)||(b>=a&&b>=d&&b<=c&&b<=e)||(b>=e&&b>=c&&b<=a&&b<=d)||(b>=e&&b>=a&&b<=c&&b<=d)||(b>=c&&b>=d&&b<=a&&b<=e)||(b>=d&&b>=e&&b<=a&&b<=c))
                printf("Case %d: %.2f\n",x,b);
            else if((c>=a&&c>=b&&c<=d&&c<=e)||(c>=a&&c>=d&&c<=b&&c<=e)||(c>=e&&c>=b&&c<=a&&c<=d)||(c>=e&&c>=a&&c<=b&&c<=d)||(c>=b&&c>=d&&c<=a&&c<=e)||(c>=d&&c>=e&&c<=a&&c<=b))
                printf("Case %d: %.2f\n",x,c);
            else if((d>=a&&d>=b&&d<=c&&d<=e)||(d>=a&&d>=c&&d<=b&&d<=e)||(d>=e&&d>=b&&d<=a&&d<=c)||(d>=e&&d>=a&&d<=b&&d<=c)||(d>=b&&d>=c&&d<=a&&d<=e)||(d>=c&&d>=e&&d<=a&&d<=b))
                printf("Case %d: %.2f\n",x,d);
            else
                printf("Case %d: %.2f\n",x,e);
        }
    }
}