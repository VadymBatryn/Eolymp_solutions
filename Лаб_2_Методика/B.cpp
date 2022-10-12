// Сума без максимального

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
 int i,n;
 int res=0;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++){
     cin>>arr[i];
     }
     sort(arr,arr+n);
 for(i=0;i<n;i++){
     if(arr[i]<arr[n-1]){
         res += arr[i];
     }
 }
 cout<<res;
}