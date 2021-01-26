#include<iostream>
using namespace std;
class pattern
{
public:
    void display();
};
void pattern:: display(void)
{
    int i,j,p=7;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<p<<" ";

        }
        p--;
        cout<<endl;
    }
}
int main()
{
    pattern obj;
    obj.display();
    return 0;
}
