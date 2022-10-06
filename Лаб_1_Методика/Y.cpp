// Попереднє непарне число 

#include <iostream>
using namespace std;
int main()
{
 int a;
 cin>>a;
 a = (a % 2 == 0) ? a-1 : a-2;
 cout<<a;
}