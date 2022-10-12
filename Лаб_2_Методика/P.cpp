// Змійка

#include <iostream>
using namespace std;
 
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    x--, y--;
    int *arr = new int[n * m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i * m + j] = (i % 2 == 0 ? i * m + j : (i + 1) * m - (j + 1)); 
        }
    }
    cout << arr[x * m + y];
    return 0;
}