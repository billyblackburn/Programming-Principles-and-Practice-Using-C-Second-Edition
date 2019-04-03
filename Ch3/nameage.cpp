#include "std_lib_facilities.h"
// read name and age
int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???"; // string variable  // ("???” means “don’t know the name”)
    double age; // integer variable (–1 means “don’t know the age”)
    cin >> first_name >> age; // read a string followed by an integer
    double  months = age * 12;
    cout << "Hello, " << first_name << " (age " << age << ") " << "or " << months << " months\n";
}