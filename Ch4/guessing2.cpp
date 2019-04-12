#include "std_lib_facilities.h"

int main() {
    cout << "\nThink of a number between 1 and 100";
    int left = 1, right = 100;
    bool found=0, yes=0;
    while(!found) {
        cout << "\nIs your number " << (left+right)/2 << "? ";
        cin >> yes;
        if(yes) {
            found = 1;
            break;
        }
        cout << "\nIs your number greater than " << (left+right)/2 << "? ";
        cin >> yes;
        if(yes) left = (left+right)/2;
        else right = (left+right)/2;
    }
    if(found) cout << "\nHooray, you found the number is " << (left+right)/2;
    else cout <<"\nFailure!";
}