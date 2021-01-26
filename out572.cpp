#include<bits/stdc++.h>
using namespace std;
int eqdecimal(char ch)
{
    switch(ch)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
}
int main()
{
    int tc,dec;
    string roman;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        dec=0;
        cin>>roman;
        reverse(roman.begin(),roman.end());
        dec=eqdecimal(roman[0]);
        char temp =roman[0];
        int l=roman.length();
        for(int j=1;j<l;j++)
        {
            if(eqdecimal(roman[j])>=eqdecimal(temp))
            {
                dec+=eqdecimal(roman[j]);
            }
            else
            {
                dec=dec-eqdecimal(roman[j]);
            }
            temp=roman[j];

        }
        cout<<"Case "<<i<<": "<<dec<<endl;
    }
}
