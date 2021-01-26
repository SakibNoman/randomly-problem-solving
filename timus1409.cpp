#include<iostream>
using namespace std;
class Timus
{
    public:
    void output();
};
void Timus::output()
{
    int n,a,b,res;
    cin>>n>>a;
    res=a-1;
    b=n-1;
    cout<<res<<" "<<b<<endl;
}
int main()
{
    Timus m;
    m.output();
    return 0;
}