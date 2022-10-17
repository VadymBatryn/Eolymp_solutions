#include <iostream>

using namespace std;

int a [100000];
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int i, j;
    i = 0; j = n -1;
    
    while (i < j) {
        if (a[i] + a[j] < x) {
            i++;
        }
        else if (a[i] + a[j] > x) {
            j--;
        }
        else {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
