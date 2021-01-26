#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long long a, b,tc,i;
    cin>>tc;
    for(i=1; i<=tc; i++)
    {
        cin>>a>>b;
        if(b>a)
        {
            long long g=gcd(a,b);
            long long l=(a*b)/g;
            if(l>=a&&l<=b)
            {
                cout<<a<<" "<<b<<endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
        }
        else
        {
            cout<<-1 -1<<endl;
        }

    }



    return 0;
}
