#include<bits/stdc++.h>
using namespace std;
int main()
{
    /////////////////////////////////
while(1)
{

        long long num ;
   char res[10000];

   int len = 0;
   cin>>num;
   for(; num > 0; ++len)
   {
      res[len] = num%10+'0';
      num/=10;
   }
   res[len] = 0;
   cout<<res;
   /////////////////////////////////////
}
}
