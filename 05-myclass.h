#ifndef MYCLASS_H
#define MYCLASS_H
#include<math.h>
// Declaration only: the compiler needs to know the class "shape".
// The actual code lives in 05-myclass.cpp.
class point {
public:
    point(int x, int y);

    // const means "this function does not modify the object"
    double operator+(point a,point b ){
        return sqrt(a.x*b.x + a.y*b.y)


    }

private:
    int x;
    int y;
};

#endif
