// Виручка театру

#include<iostream>
using namespace std;
int main()
{
int m,n,j,i,sum;
cin>>n>>m;sum=0;
int arr[n][m];
int arr2[n][m];
 for ( i=0; i<n; i++)
    {
        for ( j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for ( i=0; i<n; i++)
    {
        for ( j=0; j<m; j++)
        {
            cin>>arr2[i][j];
        }
    }
    for ( i=0; i<n; i++)
    {
        for ( j=0; j<m; j++)
        if(arr2[i][j]==1){
       sum=sum+arr[i][j];
        }
        }
        cout<<sum;
}