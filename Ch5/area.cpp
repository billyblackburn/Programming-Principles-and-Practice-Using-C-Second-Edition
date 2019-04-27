#include "std_lib_facilities.h"


class Bad_area { }; // a type specifically for reporting errors from area()
// calculate area of a rectangle;
// throw a Bad_area exception in case of a bad argument
int area(int length, int width)
{
    if (length<=0 || width<=0) throw Bad_area{};
    return length*width;
}

int framed_area(int x, int y) // calculate area within frame
{
    constexpr int frame_width = 2;
    if(x-frame_width<=0 || y-frame_width <= 0)throw Bad_area{};
    return area(x-2,y-2);
}

int main()
try {
int x = 3;
int y = 3;
int z = 4;
// . . .
    double area1 = area(x,y);
    double area2 = framed_area(5,z);
    double area3 = framed_area(y,z);
    double ratio = area1/area3;
    cout << area1 << " " << area2 << " "  << area3 << "  "  << ratio << endl;
}
catch (Bad_area) {
cout << "Oops! bad arguments to area()\n";
}