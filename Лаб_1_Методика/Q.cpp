// Умовний оператор - 4

#include <iostream>
using namespace std;
int main()
{
   short int a;
   cin>>a;
   if(a>=0){
       cout<<(a*a*a)+(2*a*a)+(4*a)-6;
   }else{
       cout<<(a*a*a)-7*a;
   }
}