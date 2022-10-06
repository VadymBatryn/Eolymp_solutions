//Одноцифрове число

#include <iostream>
using namespace std;
int main()
{
   short n;
   cin>>n;
   if(n >= 10 || n <= -10){
       cout<<"No";
   }else{
       cout<<"Ok";
   }
   
}