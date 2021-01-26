
#include<iostream>
using namespace std;
class number
{
public:
    void display()
    {
        int num1,num2;
        cout<<"Enter two number :";
        cin>>num1>>num2;
        if(num1>num2)
        {
            cout<<num1<<" is larger value.";
        }
        else
            cout<<num2<<" is larger value.";
    }
};
int main()
{
    number obj;
    obj.display();
    return 0;
}
