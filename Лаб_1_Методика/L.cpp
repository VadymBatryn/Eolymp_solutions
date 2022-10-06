// Двозначне з чотиризначного

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a = (n/100)%10;
int b = (n/10)%10;
if(a>0)
cout<<a<<b;
else cout<<b;
}