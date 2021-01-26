#include<iostream>
#include<cctype>
using namespace std;
class strings
{
    public:
    void output();
};
void strings::output()
{
    char ch;
    cout<<"Enter your character"<<endl;
    cin>>ch;
    if(isupper(ch)>0)
    {
        cout<<"Uppercase"<<endl;
    }
    else
        cout<<"Lowercase"<<endl;

}
int main()
{
    strings ob;
    ob.output();
    return 0;
}