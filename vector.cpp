#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int num_of_row = 6;
    int num_of_col = 9;
    double init_value = 3.14;
    vector< vector<double> > matrix;
//now we have an empty 2D-matrix of size (0,0). Resizing it with one single command:
    matrix.resize( num_of_row, vector<double>( num_of_col, init_value ) );
// and we are good to go ...
    for(i=0; i<num_of_row; i++)
    {
        for(j=0; j<num_of_col; j++)
            printf("%lf ",matrix[i][j]);
        printf("\n");
    }
    return 0;
}
