#include<iostream>
using namespace std;
//base class
class fish
{
public:
    string variety="Catla\n";
    void size()
    {
        cout<<"big catla\n";
    }
};
//derived class

class myfish
{
public:
    string name="Catla catla\n";
};
int main()
{
    myfish myobj;
    myobj.size();
    cout<<myobj.variety<<" "<<myobj.name;
    return 0;
}

