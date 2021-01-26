#include<iostream>
using namespace std;
class Number
{
public:
    void output(void);
};
void Number::output(void)
{
    int inp,rev=0,rem;
    cout<<"Enter a number: ";
    cin>>inp;
    while(inp!=0)
    {
        rem=inp%10;
        rev=rev*10+rem;
        inp/=10;
    }
    cout<<"Reverse of the number is: "<<rev;
}
int main()
{
    Number obj;
    obj.output();
    return 0;
}
