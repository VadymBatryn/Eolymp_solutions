// Кількість максимальних

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int n,res;
    cin >> n;
    res = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        if (a[i] == a[n-1]){
            res++;    
        }
    }
    cout << res;
}