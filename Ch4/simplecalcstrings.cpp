/*
Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program
that converts a digit to its corresponding spelled-out value; e.g., the input 7 gives the output
seven. Have the same program, using the same input loop, convert spelled-out numbers into
their digit form; e.g., the input seven gives the output 7.

// Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as
// either digits or spelled out
*/
#include "std_lib_facilities.h"
 
vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};;
vector<string> numbers = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
vector<int> ints = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int convertToInt(string numero);
int doTheThing(string num1, char x, string num2);

int main()
{


string entry1;
string entry2;
char op;
cout << "Enter a number, either an int or a string between 0 and 9(zero and nine): \n";
    while(cin >> entry1 >> op >> entry2 ){
        
        cout << convertToInt(entry1) << op << convertToInt(entry2) << " = ";
        cout << doTheThing(entry1, op, entry2) << '\n';

/*        switch(op){
          case '+':
          cout << (convertToInt(entry1) + convertToInt(entry2)) << '\n';
        }
        switch(op){
          case '-':
          cout << (convertToInt(entry1) - convertToInt(entry2)) << '\n';
        }
        switch(op){
          case '*':
          cout << (convertToInt(entry1) * convertToInt(entry2)) << '\n';
        }
        switch(op){
          case '/':
          cout << (convertToInt(entry1) / convertToInt(entry2)) << '\n';
        }
*/

        

/*        for(int i = 0; i < (words).size(); ++i) 
            if(entry1 == words[i]) {
                cout << ints[i] << endl;
                } 
            else if(entry1 == numbers[i]) {
                cout << ints[i] << endl; 
                }
*/            
    }
    return 0;

}

int convertToInt(string numero)
{
    for(int i = 0; i < (words).size(); ++i) 
        if(numero == words[i]) {
            (words[i]);
            return ints[i];
            } 
        else if(numero == numbers[i]) {
            return ints[i]; 
            }
        
}

int doTheThing(string num1, char x, string num2)
{
    while(true){  
        switch(x){
            case '+':
            return (convertToInt(num1) + convertToInt(num2));
            }
            switch(x){
            case '-':
            return (convertToInt(num1) - convertToInt(num2));
            }
            switch(x){
            case '*':
            return (convertToInt(num1) * convertToInt(num2));
            }
            switch(x){
            case '/':
            return (convertToInt(num1) / convertToInt(num2));
            }
    }
}
