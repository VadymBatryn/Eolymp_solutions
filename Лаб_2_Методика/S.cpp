#include <iostream>
#include <cmath>
using namespace std;
struct point{int x;int y;};
struct rect{point a;point b;};
rect getrect(point a, point b, rect c){
    if(a.x > b.x)swap(a.x,b.x);
    if(a.y > b.y)swap(a.y,b.y);
    c.a = a;
    c.b = b;
    return c;
}
rect getrekt(rect c){
    point a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    return getrect(a,b,c);
}
int area(rect sq){return (sq.b.x - sq.a.x) * (sq.b.y - sq.a.y);}
 
rect cross(rect l,rect r){
    rect cr;
    point a1,b1;
    a1.x = ((l.a.x > r.b.x or r.a.x > l.b.x)?0:max(l.a.x,r.a.x));
    a1.y = ((l.a.y > r.b.y or r.a.y > l.b.y)?0:max(l.a.y,r.a.y));
    b1.x = ((l.a.x > r.b.x or r.a.x > l.b.x)?0:min(l.b.x,r.b.x));
    b1.y = ((l.a.y > r.b.y or r.a.y > l.b.y)?0:min(l.b.y,r.b.y));
    return getrect(a1,b1,cr);
}
int farea(rect *q){
    return area(q[0]) + area(q[1]) + area(q[2]) - area(cross(q[0],q[1])) - area(cross(q[0],q[2])) - area(cross(q[2],q[1])) + area(cross(q[0],cross(q[1],q[2])));
}
int main() {
    rect *q = new rect [3];
    for(int i = 0;i < 3;i++)q[i] = getrekt(q[i]);
    cout<<farea(q);
}
