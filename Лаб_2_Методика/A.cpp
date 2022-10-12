// Більше серед чотирьох

#include <iostream>
using namespace std;
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main()
{
    short a,b,c,d;
    cin>>a>>b>>c>>d;
    a = max(a,b);
    b = max(c,d);
    c = max(a,b);
    cout<<c;
}
