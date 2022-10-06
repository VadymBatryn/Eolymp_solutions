// Пятизначное по порядку

#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,f;
    cin >> n;
        a = n / 10000;
        b = (n / 1000) % 10;
        c = (n / 100) % 10;
        d = (n / 10) % 10;
        f = n % 10;
        if (f > d&& d > c&& c > b&& b > a) cout << "YES";
        else cout << "NO";
}