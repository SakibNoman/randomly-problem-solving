#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    while(scanf("%lli",&num)!=EOF)
    {
        char res[10000];
        int len = 0;
        for(; num > 0; ++len)
        {
            res[len] = num%10+'0';
            num/=10;
        }
        res[len] = 0;

        int l=strlen(res);
        if(l==1)
        {
            if(!strcmp(res,"1"))
                cout<<"A";
            if(!strcmp(res,"2"))
                cout<<"B";
             if(!strcmp(res,"3"))
                cout<<"C";
             if(!strcmp(res,"4"))
                cout<<"D";
             if(!strcmp(res,"5"))
                cout<<"E";
             if(!strcmp(res,"6"))
                cout<<"F";
            if(!strcmp(res,"7"))
                cout<<"G";
             if(!strcmp(res,"8"))
                cout<<"H";
             if(!strcmp(res,"9"))
                cout<<"I";
        }
        else
        {
            string sres=res;
            reverse(sres.begin(),sres.end());

        }
    }
}
