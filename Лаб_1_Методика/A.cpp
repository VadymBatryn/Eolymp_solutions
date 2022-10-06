// Метелик Санітар

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, z1, x, y, S;
    cin >> x >> y;
    cin >> x1 >> y1 >> z1;
    cout << fixed << setprecision(3) << 1/sqrt((x1-x)*(x1-x) + (y1-y)*(y1-y) + z1*z1);
}