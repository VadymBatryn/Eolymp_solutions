// Видалити цифру 3

#include <iostream>
using namespace std;
int main()
{
   string a;
   cin>>a;
   cout<<a.erase(a.size()-3,1);
}