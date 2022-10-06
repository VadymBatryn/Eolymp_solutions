// Прямокутник

#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==d && b==c) || (a == c && b == d) || (a==b && c==d)){
        cout<<a+b+c+d;
    }else{
        cout<<"No";
    }
}