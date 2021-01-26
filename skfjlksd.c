#include <stdio.h>
long long a[100123];
long long max(long long a, long long b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    long long n, ans = 0, mask = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for (int i = 0; i < (1 << n); i++)
    {
        long long x = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                x ^= a[j];
            }
        }
        ans = max(ans, x);
    }
    printf("%lld\n", ans);
}
