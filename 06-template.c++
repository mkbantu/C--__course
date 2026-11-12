/*
Requirements

Create a class named Point to represent a point in a 2D Cartesian plane.

Overload the + operator so that adding two Point objects returns their midpoint.
Implement a member function named distance() that returns the distance between two Point objects as a double.
In the main() function:
Create two Point objects.
Input their coordinates from the user.
Display the midpoint of the two points.
Display the distance between the two points.
*/
#include <iostream>
#include <cmath>
using namespace std;
template <class T>
class Point {
    private:
     
    public:
        T x;
        T y;
        Point(T x, T y){
            this->x = x;
            this->y = y;
        }
    
    Point operator +( Point other) {
        T midX = (x + other.x) / 2;
        T midY = (y + other.y) / 2;
        return Point(midX, midY);
    }
};

int main() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point midpoint = p1 + p2;
    cout << "Midpoint: (" << midpoint.x << ", " << midpoint.y<< ")" << endl;
}