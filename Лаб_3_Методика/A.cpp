//Використовуй підпрограму

#include <iostream>
#include <iomanip>
using namespace std;
 
pair<double,double> SumDob(){
    double a, b; cin>>a>>b;
    return make_pair(a + b, a * b);
}
 
int main() {
    int n; cin>>n;
    while (n--){
        pair<double, double> pair = SumDob();
        cout<<fixed<<setprecision(4)<<pair.first<<" "<<pair.second<<endl;
    }
}