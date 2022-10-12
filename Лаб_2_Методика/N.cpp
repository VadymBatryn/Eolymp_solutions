//Початкові значення елементів

#include <iostream>
using namespace std;
int main()
{
    short n, min = 101;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){cin>>arr [i];}
    for ( int i = 0; i < n; i++ ) {
        if ( arr [i] < min ) {
            min = arr [i];
        }
    }
    
    for ( int i = 0; i < n; i++ ) {
        cout<<arr[i] - min / 2<<' ';
    }
}