#include "std_lib_facilities.h"


// Return sum of elements in A[0..N-1] 
// using recursion. 
 
  
// Driver code 
int main() 
{ 
    int limit;
    int x;
    vector<int> vect;
    int sum = 0;

    cout << "Enter limit";
    cin >> limit;

    while(cin >> x)
        vect.push_back(x);
    
    

    for (int i = 0; i < limit; i++) {
        sum = sum + vect[i];
    }
    
    std::cout << sum << std::endl;
}
      
    
