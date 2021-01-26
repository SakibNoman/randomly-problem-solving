#include<iostream>
using namespace std;
bool ip(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(ip(n)==true)
            cout<<"The number is prime\n";
        else
            cout<<"The number is not prime\n";
    }
    return 0;
}
