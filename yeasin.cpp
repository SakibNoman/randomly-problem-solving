#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    int arr[5],i,j;
    for(i=1; i<=4; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<=4; i++)
    {
        for (i = 1; i <=4; i++)
            for (j = 1; j < 4; j++)
                if (arr[j] > arr[j+1])
                    swap(&arr[j], &arr[j+1]);
    }
    for(i=1;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
