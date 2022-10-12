// Обміняти max і min

#include <iostream>
using namespace std;
int main()
{
    short n, max = -101, min = 101;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){cin>>arr [i];}
    for ( int i = 0; i < n; i++ ) {
        if ( arr [i] > max ) max = arr [i];
        if ( arr [i] < min ) min = arr [i];
    }
     for ( int i = 0; i < n; i++ ) {
        if ( arr [i] == max ) arr [i] = min;
        else if ( arr [i] == min ) arr [i] = max;
    }
    for ( int i = 0; i < n; i++ ) cout << arr [i] << " ";
}