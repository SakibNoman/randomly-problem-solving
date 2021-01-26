#include<iostream>
#include<bits/stdc++.h>
#define N 100000
using namespace std;

int main()
{
    bool prime[N];
    long long int ans[N+1],kk=1;
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(long long i=2;i<=N;i++)
    {
    if(prime[i]==true)
    {
        
        ans[kk++]=i;
        for(long long j=i+i;j*j<=N;j+=i)
        {
            prime[j]=false;
        }
    }
    }
    
    long long int n,k,x,c,i;
    int zz=0;
    while(1)
    {
        cin>>k;
    for(x=1;ans[x]<=k;x++)
    {
        if(ans[x]==k)
        {
            zz++;
            break;
        }   
        
    }
        cout<<"Position : "<< x<<endl;
    }
    
    return 0;
}
