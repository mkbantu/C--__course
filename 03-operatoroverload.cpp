#include <iostream>
#include<math.h>
using namespace std;
class point{
    public:
    int x;
    int y;

     point(int x,int y){
        this->x=x;
        this->y=y;

    }

    double  operator+(point c) {
       int a=x-c.x;
       int b=y-c.y;
       a=pow(a,2);
       b=pow(b,2);
       return sqrt (a+b);
    }
};
int main(){

    point po1(2,3);
    point po2(4,6);
    cout<<po1+po2;

}
