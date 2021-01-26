#include<iostream>
using namespace std;
int main()
{
    struct Student
    {
        string Name;
        int ID;
        string Semester,Batch;
    };
    Student st1;
    cin>>st1.Name;
    cout<<st1.Name;
}