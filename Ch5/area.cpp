#include "std_lib_facilities.h"

int area(int length, int width) // calculate area of a rectangle
{
    return length*width;
}

int framed_area(int x, int y) // calculate area within frame
{
    return area(x-2,y-2);
}

int main()
{
    int x = -1;
    int y = 2;
    int z = 4;
    // . . .
    if (x<=0 || y<=0) error("non-positive area() argument");
    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3; // convert to double to get
    cout << area1 << " " << area2 << " " << area3<< '\n';
    // floating-point division
}