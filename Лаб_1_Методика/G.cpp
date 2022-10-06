// Сума цифр двоцифрового числа

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 short a;
 cin>>a;
 cout<<abs(a%10 + a/10);
}