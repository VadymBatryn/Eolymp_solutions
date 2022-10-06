// Централізоване опалення

#include <iostream>
using namespace std;
int main()
{
    long long w,h,k,l;
    cin>>h>>w>>l>>k;
    cout<<((h * w * l)+ k - 1) / k;
}