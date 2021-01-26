#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,k,dl,med,mst,mct;
    while(scanf("%lli%lli%lli%lli",&m,&n,&k,&dl)!=EOF)
    {
        
            if(m>0&&n>0&&k>0)
            {
            med=m+n+k;
            mst=(med*15*75);
            mct=(med*3*dl*100);
            if(mct>=mst)
            {
                cout<<"Nezam can attend"<<endl;
            }
            else
            {
                cout<<"Nezam cannot attend"<<endl;
            }
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
    }
    return 0;
}