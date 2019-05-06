#include "std_lib_facilities.h"
/*
Quadratic equations are of the form
a * x^2 + b * x + c = 0
x = -b +- (sqroot (b^2-4ac)) )/2a

To solve these, one uses the quadratic formula:
There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can
calculate x for a quadratic equation. Create a function that prints out the roots of a quadratic
equation, given a, b, c. When the program detects an equation with no real roots, have it print out
a message. How do you know that your results are plausible? Can you check that they are
correct?

you need to compute the discriminant (b2​-4ac). If the discrimant is less than 0, then the 
quadratic has no real roots. If the discriminant is equal to zero then the quadratic has equal 
roots. If the discriminant is more than zero then it has 2 distinct roots.
*/

int main()
{
    // 3x^2 + 5x + 4 = 0
    int a = -4;
    int b = 12;
    int c = -9;
    double discremenant = (pow(b,2) - 4*a*c);
    double nx = (-b + (sqrt((pow(b,2) - 4*a*c))))/(2*a);
    double px = (-b - (sqrt((pow(b,2) - 4*a*c))))/(2*a);
    cout << nx << '\t' << px << '\t' << discremenant << '\n';
    double checker1 = (a * pow(nx,2)) + (b * nx) + c;
    double checker2 = (a * pow(px,2)) + (b * px) + c;
    cout << checker1 << '\t' << checker2;

}