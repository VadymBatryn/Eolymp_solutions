// Додатнє, від'ємне чи нуль

#include <iostream>
using namespace std;
int main()
{
   long a;
   cin>>a;
   if(a>0){
       cout<<"Positive";
   }else if(a<0){
      cout<<"Negative";
   }else{
       cout<<"Zero";
   }
}