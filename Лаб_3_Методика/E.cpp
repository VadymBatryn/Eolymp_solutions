#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n , res;
    cin >> n;
    cout << n - (n & (n  - 1));
}