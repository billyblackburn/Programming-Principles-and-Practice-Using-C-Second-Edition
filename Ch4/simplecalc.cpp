#include "std_lib_facilities.h"

int main()
{
    double first = 0;
    double second = 0;
    char op = ' ';
    cout << "Enter 2 numbers followed by an operator: \n";
    while(cin >> first >> second >> op){
        //if(op != '+' || op != '-' || op != '*' || op != '/'){
          //  cout << "Not a valid operation";}
        
        switch(op){
          case '+':
          cout << (first + second) << '\n';
        }
        switch(op){
          case '-':
          cout << (first - second) << '\n';
        }
        switch(op){
          case '*':
          cout << (first * second) << '\n';
        }
        switch(op){
          case '/':
          cout << (first / second) << '\n';
        }
    }
}