#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> two_d_vector
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<two_d_vector[i][j];
        }
        cout<<endl;
    }

    return 0;
}