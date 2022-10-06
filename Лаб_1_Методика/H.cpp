// Розклад трицифрового числа

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 short a;
 cin>>a;
 a = abs(a);
 cout<<a/100<<"\n"<<a%100/10<<"\n"<<a%10;
}