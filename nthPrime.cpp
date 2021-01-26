#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void Sieve(vector<int> &primes)
{
    bool IPrime[1000000];
    memset(IPrime, true, sizeof(IPrime));
    for (int i = 2; i * i < 1000000; i++)
    {
        if (IPrime[i] == true)
        {
            for (int j = i * i; j <  1000000; j += i)
                IPrime[j] = false;
        }
    }
    for (int i = 2; i < 170000; i++)
       if (IPrime[i])
            primes.push_back(i);
}
int main()
{
    vector<int> primes;
    Sieve(primes);
    int x,n,a;
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        scanf("%d",&n);
    cout << primes[n-1] << endl;
    }
    return 0;
}
