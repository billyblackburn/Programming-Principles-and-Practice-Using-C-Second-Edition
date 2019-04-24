// https://stackoverflow.com/questions/5200879/printing-prime-numbers-from-1-through-100
#include "std_lib_facilities.h"

int main () 
{
    for (int i=2; i<100; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime) cout << i  << " \n";
    }
    return 0;
}