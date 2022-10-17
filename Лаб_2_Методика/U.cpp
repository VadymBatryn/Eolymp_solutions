#include <iostream>
#include <algorithm>

using namespace std;

int a [100000];
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    
    for (int k = 0; k < n - 2; k++) {
        int i, j;
        i = k+1; j = n -1;
        while (i < j) {
            if (a[i] + a[j] < x - a[k]) {
                i++;
            }
            else if (a[i] + a[j] > x - a[k]) {
                j--;
            }
            else {
                cout << a[k] << " " << a[i] << " " << a[j];
                return 0;
            }
        
        }
    }
    cout << -1;
    return 0;
}
