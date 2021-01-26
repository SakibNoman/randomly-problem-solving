#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string str,rstr,ustr;
    int l,tc=0;
    while(cin>>str)
    {
        tc++;
        rstr=str;
        ustr=str;
        int len=str.length();
        reverse(rstr.begin(),rstr.end());
        if(str==rstr)
        {
            cout<<"Case #"<<tc<<": "<<"Yes"<<endl;
        }
        else
        {
            sort(ustr.begin(),ustr.end());
            int sz=unique(ustr.begin(),ustr.end())-ustr.begin();
            int id=0;
            for(int i=0;i<sz;i++)
            {
                int even=0;
                for(int j=0;j<len;j++)
                {
                    if(ustr[i]==str[j])
                    {
                        even++;
                    }
                }
                if(even%2!=0)
                {
                    id++;
                }
            }
            if(id==1)
            {
                cout<<"Case #"<<tc<<": "<<"Yes"<<endl;
            }
            else
            {
                cout<<"Case #"<<tc<<": "<<"No"<<endl;
            }

        }
    }
    return 0;
}
