// Перестановка цифр трицифрового

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,s,x,r;
    cin>>a;
    b=abs(a/100);
    c=abs(a%100/10);
    d=abs(a%10);
    r=d*100+c*10+b;
    cout<<r;
}