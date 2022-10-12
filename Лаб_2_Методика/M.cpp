// Найбільші вправо

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
int n , max = -101,count = 0;
cin>>n;
vector<int> v;
vector<int> v2;
for(int i = 0;i<n;i++){
    int x;cin>>x;
    if(max<x){
        max=x;
    }
    v.push_back(x);
    }
for(int i = 0;i<n;i++){
    if(max==v[i]){
        count++;
        }
    }
for(int i = 0;i<n;i++){
    if(v[i]!=max){
        v2.push_back(v[i]);
        }
}
for(int i = 0;i<count;i++){
    v2.push_back(max);
    }
for(int i=0;i<n;i++){
    cout<<v2[i]<<" ";
    }
}