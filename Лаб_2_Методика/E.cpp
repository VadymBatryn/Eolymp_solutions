// Більші своїх сусідів

#include <iostream>
using namespace std;
int main()
{
    short n, count = 0;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
        if(i>=2 && arr[i-2] < arr[i-1] && arr[i-1] > arr[i]){
            count++;
        }  
    }
    cout<<count;
}