// Менше з трьох

#include <iostream>
using namespace std;
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   x = x < y ? (x < z ? x : z) : (y < z ? y : z);
   cout<<x;
}