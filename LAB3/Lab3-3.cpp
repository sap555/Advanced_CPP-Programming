#include<iostream>
using namespace std;

int main(){
    struct Point{
        int x;
        int y;
    } p1;

    Point* p2 = &p1;
    Point* p3 = new Point;

    p1 = {1,2};
    p1.x = 5;

    cout << (*p2).x << ", " << (*p2).y << endl;
    (*p3).x =10; (*p3).y = 20;
    cout << (*p3).x << ", " << (*p3).y << endl;
}
