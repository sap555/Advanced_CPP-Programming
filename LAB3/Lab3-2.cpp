#include<iostream>
using namespace std;

int main(){
    struct Point{
        int x;
        int y;

    int sum(){
        return x + y;
    }
    int diff(){
        return x-y;
    }
    int prod(){
        return x * y;
    }
    int quot(){
        return x / y;
    }
    void fourDirections(int distance){
        cout<<"Up: (" << x << ", " << y+distance << ")" << endl;
        cout<<"Down: (" << x << ", " << y-distance << ")" << endl;
        cout<<"Left: (" << x-distance << ", " << y << ")" << endl;
        cout<<"Right: (" << x+distance << ", " << y << ")" << endl;
    }
    } p1;
    int x0;
    int y0;
    for (x0 = 1; x0<=10; x0++){
        y0 = x0 + 1;
        p1 = {x0,y0};
    }
    p1 = {x0,y0};
    cout << "(" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Sum: " << p1.sum() << endl;
    cout << "Diff: " << p1.diff() << endl;
    cout << "Prod: " << p1.prod() << endl;
    cout << "Quot: " << p1.quot() << endl;

    p1.fourDirections(3);
} 