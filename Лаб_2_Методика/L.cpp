// Найменші вліво

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
int n , min = 101,count = 0;
cin>>n;
vector<int> v;
vector<int> v2;
for(int i = 0;i<n;i++){
    int x;cin>>x;
    if(min>x){
        min=x;
    }
    v.push_back(x);
    }
for(int i = 0;i<n;i++){
    if(min==v[i]){
        count++;
        }
    }
for(int i = 0;i<count;i++){
    v2.push_back(min);
}
for(int i = 0;i<n;i++){
    if(v[i]!=min){
        v2.push_back(v[i]);
        }
    }
for(int i = 0;i<n;i++){
    cout<<v2[i]<<" ";
}

}