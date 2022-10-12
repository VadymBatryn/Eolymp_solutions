// Крайній найбільший

#include <iostream>
using namespace std;
int main()
{
    short n, maxIndex = 0, max = -101;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){cin>>arr [i];}
    for ( int i = 0; i < n; i++ ) {
        if ( arr [i] >= max ) {
            max = arr [i];
            maxIndex = i;
        }
    }
    arr[maxIndex] = arr[n-1]; arr[n-1] = max;
    for(int i=0; i<n; i++){cout<<arr[i]<<' ';}
}