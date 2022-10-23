#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
 

int main() {
    double x,y,z; cin>>x>>y>>z;
    cout<<fixed<<setprecision(2)<<min(min(max(x,y), max(y,z)),min(max(y,z),x+y+z));
}