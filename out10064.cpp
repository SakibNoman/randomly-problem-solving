#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bin,rsdec,rbin,sdec;
    long long dec;
    int i=0;
    while(scanf("%lld",&dec)!=EOF)
    {
        long long num = dec;
        char res[10000];
        int len = 0;
        for(; num > 0; ++len)
        {
            res[len] = num%10+'0';
            num/=10;
        }
        res[len] = 0;
        i++;
        while(dec!=0)
        {
            if(dec%2==0)
            {
                bin+='0';
            }
            else
            {
                bin+='1';
            }
            dec/=2;
        }
        sdec=res;
        rsdec=sdec;
        rbin=bin;
        reverse(rbin.begin(),rbin.end());
        reverse(rsdec.begin(),rsdec.end());
        if(sdec==rsdec)
        {
            if(rbin==bin)
            {
                cout<<"Case "<<i<<"#"<<endl<<"Super Palindromic Number."<<endl;
            }
            else
            {
                cout<<"Case "<<i<<"#"<<endl<<"Palindromic Number."<<endl;
            }
        }
        else
        {
            cout<<"Case "<<i<<"#"<<endl<<"Not Palindromic Number."<<endl;
        }
        bin.clear();
        sdec.clear();
    }
}
