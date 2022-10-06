// Різниця

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 short a;
 cin>>a;
 a = abs(a);
 cout<<((a/100)*(a%100/10)*(a%10))-(a/100+a%100/10+a%10);
}