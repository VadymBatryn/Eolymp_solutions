// Чотиризначний паліндром

#include <iostream>
using namespace std;
int main()
{
   string a;
   cin>>a;
   if(a[0]==a[3] && a[2]==a[1]){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
}