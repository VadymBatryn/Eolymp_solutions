// Перший найменший

#include <iostream>
using namespace std;
int main()
{
    short n, minIndex = 0, min = 101;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){cin>>arr [i];}
    for ( int i = 0; i < n; i++ ) {
        if ( arr [i] < min ) {
            min = arr [i];
            minIndex = i;
        }
    }
    arr[minIndex] = arr[0]; arr[0] = min;
    for(int i=0; i<n; i++){cout<<arr[i]<<' ';}
}