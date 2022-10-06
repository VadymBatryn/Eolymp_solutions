// Кількість непарних цифр

#include <iostream>
#include <string>
using namespace std;
int main()
{
 long a,b,count;
 count=0;
 cin>>a;
 while(a>0){
     b=a%10;
     a/=10;
     if(b%2!=0) count++;
    }
 cout<<count;
}