/*. Write a program to play a numbers guessing game. The user thinks of a number between 1 and
100 and your program asks questions to figure out what the number is (e.g., “Is the number you
are thinking of less than 50?”). Your program should be able to identify the number after asking
no more than seven questions. Hint: Use the < and <= operators and the if-else construct.*/

#include "std_lib_facilities.h"
int main()
{
 int number;
 string response;
 int guess;   
 int high = 100;
 int low = 0;
 guess = (high+low)/2;
 cout << "Enter a number between 0 and 100\n";
 cin >> number;
 for(int i = 0; i < 7; ++i){
     
     if(number == (low + high)/2){
         cout << "Found it!: " << (low + high) / 2;
         break;
     }

     cout << "Is your number less than " << (low + high)/2 << '\n';
     cin >> response;
     
     if(response == "y" || response == "Y"){
           
         high = (low + high)/2;
         guess = high;

     }
     else {
         low = (low + high)/2;
         guess = low;
     }
     

 }
    
    
   


}