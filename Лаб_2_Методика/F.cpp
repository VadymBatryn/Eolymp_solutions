// Найбільший елемент

#include <iostream>
using namespace std;
int main()
{
    short n, index = 0, max = -101;
    cin>>n;
    int arr[n];
    for(int i=1; i <= n; i++){
        cin>>arr[i];
        if(max < arr[i]){
            max = arr[i]; index = i;
        }
    }
    cout<<max<<' '<<index;
}