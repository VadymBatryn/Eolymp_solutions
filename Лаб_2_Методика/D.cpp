// Два найбільших

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    short n;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++){cin>>arr[i];}
    sort(arr, arr + n);
    cout<<(arr[n-1]+arr[n-2]);
}
