// Половина

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1) x[i][j] = 0;
            else if (i + j < n - 1) x[i][j] = 2;
            else x[i][j] = 1;
            cout<<x[i][j];
        }
        cout<<'\n';
    }
}