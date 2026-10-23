#include "05-myclass.h"

#include <cmath>

// Definition: this is where the member functions are actually implemented.
// point:: tells the compiler these belong to the point class.
point::point(int x, int y) : x(x), y(y) {}

double point::operator+(const point& other) const {
    int a = x - other.x;
    int b = y - other.y;
    return std::sqrt(a * a + b * b);
}
